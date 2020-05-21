
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e32xm1_t test_vmfgevv_e32xm1_float32xm1 (float32xm1_t a, float32xm1_t b, unsigned int gvl) {
    return vmfgevv_e32xm1_float32xm1 (a, b, gvl);
}


e32xm2_t test_vmfgevv_e32xm2_float32xm2 (float32xm2_t a, float32xm2_t b, unsigned int gvl) {
    return vmfgevv_e32xm2_float32xm2 (a, b, gvl);
}


e32xm4_t test_vmfgevv_e32xm4_float32xm4 (float32xm4_t a, float32xm4_t b, unsigned int gvl) {
    return vmfgevv_e32xm4_float32xm4 (a, b, gvl);
}


e32xm8_t test_vmfgevv_e32xm8_float32xm8 (float32xm8_t a, float32xm8_t b, unsigned int gvl) {
    return vmfgevv_e32xm8_float32xm8 (a, b, gvl);
}


e64xm1_t test_vmfgevv_e64xm1_float64xm1 (float64xm1_t a, float64xm1_t b, unsigned int gvl) {
    return vmfgevv_e64xm1_float64xm1 (a, b, gvl);
}


e64xm2_t test_vmfgevv_e64xm2_float64xm2 (float64xm2_t a, float64xm2_t b, unsigned int gvl) {
    return vmfgevv_e64xm2_float64xm2 (a, b, gvl);
}


e64xm4_t test_vmfgevv_e64xm4_float64xm4 (float64xm4_t a, float64xm4_t b, unsigned int gvl) {
    return vmfgevv_e64xm4_float64xm4 (a, b, gvl);
}


e64xm8_t test_vmfgevv_e64xm8_float64xm8 (float64xm8_t a, float64xm8_t b, unsigned int gvl) {
    return vmfgevv_e64xm8_float64xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmfge\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmfge\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmfge\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmfge\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmfge\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmfge\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmfge\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmfge\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

