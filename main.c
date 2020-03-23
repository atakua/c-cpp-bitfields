#include <stdio.h>
#include "common.h"

int main() {
    control_t ctl;
    ctl.q = 0xfffffffd80236000ull;

    uint64_t c_res = c_behavior(ctl);
    uint64_t cpp_res = cpp_behavior(ctl);
    const char *announce = c_res == cpp_res? "C == C++" : "OMG C != C++";
    printf("%s\n", announce);

    return c_res == cpp_res? 0: 1;
}
