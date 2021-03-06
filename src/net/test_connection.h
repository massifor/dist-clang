#pragma once

#include <net/connection.h>

#include <sys/types.h>

namespace dist_clang {
namespace net {

class TestConnection : public Connection {
 public:
  TestConnection();

  inline bool IsClosed() const override { return false; }

  bool ReadAsync(ReadCallback callback) override;
  bool ReadSync(Message* message, Status* status) override;

  inline bool SendTimeout(ui32 sec_timeout, String* error) override {
    return true;
  }
  inline bool ReadTimeout(ui32 sec_timeout, String* error) override {
    return true;
  }

  void AbortOnSend();
  void AbortOnRead();
  void CountSendAttempts(Atomic<ui32>* counter);
  void CountReadAttempts(Atomic<ui32>* counter);
  void CallOnSend(Fn<void(const Message&)> callback);
  void CallOnRead(Fn<void(Message*)> callback);

  bool TriggerReadAsync(UniquePtr<proto::Universal> message,
                        const proto::Status& status);

 private:
  bool SendAsyncImpl(SendCallback callback) override;
  bool SendSyncImpl(Status* status) override;

  bool abort_on_send_, abort_on_read_;
  Atomic<ui32>* send_attempts_;
  Atomic<ui32>* read_attempts_;
  Fn<void(const Message&)> on_send_;
  Fn<void(Message*)> on_read_;
  ReadCallback read_callback_;
};

}  // namespace net
}  // namespace dist_clang
