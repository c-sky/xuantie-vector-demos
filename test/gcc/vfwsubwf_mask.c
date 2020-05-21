
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float64xm2_t test_vfwsubwf_mask_float64xm2 (float64xm2_t merge, float64xm2_t a, float b, e32xm1_t mask, unsigned int gvl) {
    return vfwsubwf_mask_float64xm2 (merge, a, b, mask, gvl);
}


float64xm4_t test_vfwsubwf_mask_float64xm4 (float64xm4_t merge, float64xm4_t a, float b, e32xm2_t mask, unsigned int gvl) {
    return vfwsubwf_mask_float64xm4 (merge, a, b, mask, gvl);
}


float64xm8_t test_vfwsubwf_mask_float64xm8 (float64xm8_t merge, float64xm8_t a, float b, e32xm4_t mask, unsigned int gvl) {
    return vfwsubwf_mask_float64xm8 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfwsub\.wf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfwsub\.wf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfwsub\.wf" } }*/

/* { dg-final { cleanup-saved-temps } } */

