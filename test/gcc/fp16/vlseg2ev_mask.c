
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x2xm1_t test_vlseg2ev_mask_float16x2xm1 (float16x2xm1_t merge, const float16_t *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg2ev_mask_float16x2xm1 (merge, address, mask, gvl);
}


float16x2xm2_t test_vlseg2ev_mask_float16x2xm2 (float16x2xm2_t merge, const float16_t *address, e16xm2_t mask, unsigned int gvl) {
    return vlseg2ev_mask_float16x2xm2 (merge, address, mask, gvl);
}


float16x2xm4_t test_vlseg2ev_mask_float16x2xm4 (float16x2xm4_t merge, const float16_t *address, e16xm4_t mask, unsigned int gvl) {
    return vlseg2ev_mask_float16x2xm4 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvlseg2e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

