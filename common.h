#ifndef COMMON_H
#define COMMON_H

#include <stdint.h>

typedef union control {
        uint64_t q;
        struct {
                uint64_t a: 1;
                uint64_t b: 1;
                uint64_t c: 1;
                uint64_t d: 1;
                uint64_t e: 1;
                uint64_t f: 1;
                uint64_t g: 4;
                uint64_t h: 1;
                uint64_t i: 1;
                uint64_t p52: 52;
        } b;
} control_t;

#ifdef __cplusplus
extern "C" {
#endif

uint64_t cpp_behavior(control_t ctl);
uint64_t c_behavior(control_t ctl);

#ifdef __cplusplus
}
#endif

#endif // COMMON_H
