
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg8ev_mask_float16xm1_float16x8xm1 (float16_t *address, float16xm1_t index, float16x8xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg8ev_mask_float16xm1_float16x8xm1 (address, index, a, mask, gvl);
}

/* { dg-final { scan-assembler-times "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg8e\.v" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

