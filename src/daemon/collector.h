#pragma once

#include <daemon/base_daemon.h>

namespace dist_clang {
namespace daemon {

class Collector : public BaseDaemon {
 public:
  explicit Collector(const proto::Configuration& configuration);

  bool Initialize() override;

 private:
  bool HandleNewMessage(net::ConnectionPtr connection, Universal message,
                        const proto::Status& status) override;

  const proto::Host local_;
};

}  // namespace daemon
}  // namespace dist_clang
