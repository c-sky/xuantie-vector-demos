
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e32xm1_t test_vmfltvf_mask_e32xm1_float32xm1 (e32xm1_t merge, float32xm1_t a, float b, e32xm1_t mask, unsigned int gvl) {
    return vmfltvf_mask_e32xm1_float32xm1 (merge, a, b, mask, gvl);
}


e32xm2_t test_vmfltvf_mask_e32xm2_float32xm2 (e32xm2_t merge, float32xm2_t a, float b, e32xm2_t mask, unsigned int gvl) {
    return vmfltvf_mask_e32xm2_float32xm2 (merge, a, b, mask, gvl);
}


e32xm4_t test_vmfltvf_mask_e32xm4_float32xm4 (e32xm4_t merge, float32xm4_t a, float b, e32xm4_t mask, unsigned int gvl) {
    return vmfltvf_mask_e32xm4_float32xm4 (merge, a, b, mask, gvl);
}


e32xm8_t test_vmfltvf_mask_e32xm8_float32xm8 (e32xm8_t merge, float32xm8_t a, float b, e32xm8_t mask, unsigned int gvl) {
    return vmfltvf_mask_e32xm8_float32xm8 (merge, a, b, mask, gvl);
}


e64xm1_t test_vmfltvf_mask_e64xm1_float64xm1 (e64xm1_t merge, float64xm1_t a, double b, e64xm1_t mask, unsigned int gvl) {
    return vmfltvf_mask_e64xm1_float64xm1 (merge, a, b, mask, gvl);
}


e64xm2_t test_vmfltvf_mask_e64xm2_float64xm2 (e64xm2_t merge, float64xm2_t a, double b, e64xm2_t mask, unsigned int gvl) {
    return vmfltvf_mask_e64xm2_float64xm2 (merge, a, b, mask, gvl);
}


e64xm4_t test_vmfltvf_mask_e64xm4_float64xm4 (e64xm4_t merge, float64xm4_t a, double b, e64xm4_t mask, unsigned int gvl) {
    return vmfltvf_mask_e64xm4_float64xm4 (merge, a, b, mask, gvl);
}


e64xm8_t test_vmfltvf_mask_e64xm8_float64xm8 (e64xm8_t merge, float64xm8_t a, double b, e64xm8_t mask, unsigned int gvl) {
    return vmfltvf_mask_e64xm8_float64xm8 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmflt\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmflt\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmflt\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmflt\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmflt\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmflt\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmflt\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmflt\.vf" } }*/

/* { dg-final { cleanup-saved-temps } } */

