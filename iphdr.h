#include <cstdint>
#include <arpa/inet.h>
#include "ip.h"

#pragma pack(push, 1)
struct IpHdr final {
    u_int8_t hl_:4;
    u_int8_t ver_:4;
    u_int8_t tos_;
    u_int16_t len_;
    u_int16_t id_;
    u_int16_t off_;
    u_int8_t ttl_;
    u_int8_t pro_;
    u_int16_t sum_;
    Ip sip_;
    Ip tip_;

    u_int8_t pro() { return pro_; }
    Ip sip() { return ntohl(sip_); }
    Ip tip() { return ntohl(tip_); }

    enum: u_int8_t {
        TCP = 6
    };
};
#pragma pack(pop)