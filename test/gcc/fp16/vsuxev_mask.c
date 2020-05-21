
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsuxev_mask_float16xm1 (float16_t *address, float16xm1_t index, float16xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsuxev_mask_float16xm1 (address, index, a, mask, gvl);
}


void test_vsuxev_mask_float16xm2 (float16_t *address, float16xm2_t index, float16xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vsuxev_mask_float16xm2 (address, index, a, mask, gvl);
}


void test_vsuxev_mask_float16xm4 (float16_t *address, float16xm4_t index, float16xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vsuxev_mask_float16xm4 (address, index, a, mask, gvl);
}


void test_vsuxev_mask_float16xm8 (float16_t *address, float16xm8_t index, float16xm8_t a, e16xm8_t mask, unsigned int gvl) {
    return vsuxev_mask_float16xm8 (address, index, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsuxe\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsuxe\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvsuxe\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvsuxe\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

