
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vlev_mask_float16xm1 (float16xm1_t merge, const float16_t *address, e16xm1_t mask, unsigned int gvl) {
    return vlev_mask_float16xm1 (merge, address, mask, gvl);
}


float16xm2_t test_vlev_mask_float16xm2 (float16xm2_t merge, const float16_t *address, e16xm2_t mask, unsigned int gvl) {
    return vlev_mask_float16xm2 (merge, address, mask, gvl);
}


float16xm4_t test_vlev_mask_float16xm4 (float16xm4_t merge, const float16_t *address, e16xm4_t mask, unsigned int gvl) {
    return vlev_mask_float16xm4 (merge, address, mask, gvl);
}


float16xm8_t test_vlev_mask_float16xm8 (float16xm8_t merge, const float16_t *address, e16xm8_t mask, unsigned int gvl) {
    return vlev_mask_float16xm8 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvle\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

