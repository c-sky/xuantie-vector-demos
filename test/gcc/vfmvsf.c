
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfmvsf_float32xm1 (float a, unsigned int gvl) {
    return vfmvsf_float32xm1 (a, gvl);
}


float32xm2_t test_vfmvsf_float32xm2 (float a, unsigned int gvl) {
    return vfmvsf_float32xm2 (a, gvl);
}


float32xm4_t test_vfmvsf_float32xm4 (float a, unsigned int gvl) {
    return vfmvsf_float32xm4 (a, gvl);
}


float32xm8_t test_vfmvsf_float32xm8 (float a, unsigned int gvl) {
    return vfmvsf_float32xm8 (a, gvl);
}


float64xm1_t test_vfmvsf_float64xm1 (double a, unsigned int gvl) {
    return vfmvsf_float64xm1 (a, gvl);
}


float64xm2_t test_vfmvsf_float64xm2 (double a, unsigned int gvl) {
    return vfmvsf_float64xm2 (a, gvl);
}


float64xm4_t test_vfmvsf_float64xm4 (double a, unsigned int gvl) {
    return vfmvsf_float64xm4 (a, gvl);
}


float64xm8_t test_vfmvsf_float64xm8 (double a, unsigned int gvl) {
    return vfmvsf_float64xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfmv\.s\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfmv\.s\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfmv\.s\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvfmv\.s\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvfmv\.s\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvfmv\.s\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvfmv\.s\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvfmv\.s\.f" } }*/

/* { dg-final { cleanup-saved-temps } } */

