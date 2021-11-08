#include <cstdint>
#include <arpa/inet.h>
#include "ip.h"

#pragma pack(push, 1)
struct TcpHdr final {
    u_int16_t sp_;
    u_int16_t dp_;
    u_int32_t sq_;
    u_int32_t ack_;
    u_char off_;
    u_int8_t ctrl_;
    u_int16_t window_;
    u_int16_t chksum_;
    u_int16_t ugptr;

    u_int16_t dp() { return ntohs(dp_); }
    u_int8_t off() { return off_; }

    enum: u_int16_t{
        HTTP = 80
    };
};
#pragma pack(pop)