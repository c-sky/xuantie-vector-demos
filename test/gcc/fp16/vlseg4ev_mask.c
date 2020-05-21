
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x4xm1_t test_vlseg4ev_mask_float16x4xm1 (float16x4xm1_t merge, const float16_t *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_float16x4xm1 (merge, address, mask, gvl);
}


float16x4xm2_t test_vlseg4ev_mask_float16x4xm2 (float16x4xm2_t merge, const float16_t *address, e16xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_float16x4xm2 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg4e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

