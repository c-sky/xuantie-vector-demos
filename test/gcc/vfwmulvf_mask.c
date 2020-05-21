
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float64xm2_t test_vfwmulvf_mask_float64xm2_float32xm1 (float64xm2_t merge, float32xm1_t a, float b, e32xm1_t mask, unsigned int gvl) {
    return vfwmulvf_mask_float64xm2_float32xm1 (merge, a, b, mask, gvl);
}


float64xm4_t test_vfwmulvf_mask_float64xm4_float32xm2 (float64xm4_t merge, float32xm2_t a, float b, e32xm2_t mask, unsigned int gvl) {
    return vfwmulvf_mask_float64xm4_float32xm2 (merge, a, b, mask, gvl);
}


float64xm8_t test_vfwmulvf_mask_float64xm8_float32xm4 (float64xm8_t merge, float32xm4_t a, float b, e32xm4_t mask, unsigned int gvl) {
    return vfwmulvf_mask_float64xm8_float32xm4 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfwmul\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfwmul\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfwmul\.vf" } }*/

/* { dg-final { cleanup-saved-temps } } */

