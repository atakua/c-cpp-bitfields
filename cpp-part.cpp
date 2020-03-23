#include <stdint.h>
#include "common.h"
uint64_t cpp_behavior(control_t ctl) {
    return ctl.b.p52 << 12;
}
