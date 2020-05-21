
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg6ev_mask_float16x6xm1 (float16_t *address, long stride, float16x6xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vssseg6ev_mask_float16x6xm1 (address, stride, a, mask, gvl);
}

/* { dg-final { scan-assembler-times "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg6e\.v" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

