
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x8xm1_t test_vlsseg8ev_float16x8xm1 (const float16_t *address, long stride, unsigned int gvl) {
    return vlsseg8ev_float16x8xm1 (address, stride, gvl);
}

/* { dg-final { scan-assembler-times "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg8e\.v" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

