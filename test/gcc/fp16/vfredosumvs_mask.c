
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vfredosumvs_mask_float16xm1 (float16xm1_t a, float16xm1_t b, e16xm1_t mask, unsigned int gvl) {
    return vfredosumvs_mask_float16xm1 (a, b, mask, gvl);
}


float16xm2_t test_vfredosumvs_mask_float16xm2 (float16xm2_t a, float16xm2_t b, e16xm2_t mask, unsigned int gvl) {
    return vfredosumvs_mask_float16xm2 (a, b, mask, gvl);
}


float16xm4_t test_vfredosumvs_mask_float16xm4 (float16xm4_t a, float16xm4_t b, e16xm4_t mask, unsigned int gvl) {
    return vfredosumvs_mask_float16xm4 (a, b, mask, gvl);
}


float16xm8_t test_vfredosumvs_mask_float16xm8 (float16xm8_t a, float16xm8_t b, e16xm8_t mask, unsigned int gvl) {
    return vfredosumvs_mask_float16xm8 (a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfredosum\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfredosum\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfredosum\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvfredosum\.vs" } }*/

/* { dg-final { cleanup-saved-temps } } */

