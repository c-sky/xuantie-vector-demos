
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vfmvvf_float16xm1 (float16_t a, unsigned int gvl) {
    return vfmvvf_float16xm1 (a, gvl);
}


float16xm2_t test_vfmvvf_float16xm2 (float16_t a, unsigned int gvl) {
    return vfmvvf_float16xm2 (a, gvl);
}


float16xm4_t test_vfmvvf_float16xm4 (float16_t a, unsigned int gvl) {
    return vfmvvf_float16xm4 (a, gvl);
}


float16xm8_t test_vfmvvf_float16xm8 (float16_t a, unsigned int gvl) {
    return vfmvvf_float16xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfmv\.v\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfmv\.v\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfmv\.v\.f" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvfmv\.v\.f" } }*/

/* { dg-final { cleanup-saved-temps } } */

