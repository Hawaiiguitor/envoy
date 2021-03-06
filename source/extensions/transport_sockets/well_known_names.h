#pragma once

#include <string>

#include "common/singleton/const_singleton.h"

namespace Envoy {
namespace Extensions {
namespace TransportSockets {

/**
 * Well-known transport socket names.
 * NOTE: New transport sockets should use the well known name: envoy.transport_sockets.name.
 */
class TransportSocketNameValues {
public:
  const std::string Alts = "envoy.transport_sockets.alts";
  const std::string Quic = "envoy.transport_sockets.quic";
  const std::string RawBuffer = "envoy.transport_sockets.raw_buffer";
  const std::string Tap = "envoy.transport_sockets.tap";
  const std::string Tls = "envoy.transport_sockets.tls";
  const std::string UpstreamProxyProtocol = "envoy.transport_sockets.upstream_proxy_protocol";
  const std::string StartTls = "envoy.transport_sockets.starttls";
};

using TransportSocketNames = ConstSingleton<TransportSocketNameValues>;

/**
 * Well-known transport protocol names.
 */
class TransportProtocolNameValues {
public:
  const std::string Tls = "tls";
  const std::string RawBuffer = "raw_buffer";
  const std::string Quic = "quic";
  const std::string StartTls = "starttls";
};

// TODO(lizan): Find a better place to have this singleton.
using TransportProtocolNames = ConstSingleton<TransportProtocolNameValues>;

} // namespace TransportSockets
} // namespace Extensions
} // namespace Envoy
