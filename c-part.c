#include <stdint.h>
#include "common.h"
uint64_t c_behavior(control_t ctl) {
    return ctl.b.p52 << 12;
}
