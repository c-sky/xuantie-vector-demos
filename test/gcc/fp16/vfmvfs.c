
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16_t test_vfmvfs_float16xm1 (float16xm1_t a, unsigned int gvl) {
    return vfmvfs_float16xm1 (a, gvl);
}


float16_t test_vfmvfs_float16xm2 (float16xm2_t a, unsigned int gvl) {
    return vfmvfs_float16xm2 (a, gvl);
}


float16_t test_vfmvfs_float16xm4 (float16xm4_t a, unsigned int gvl) {
    return vfmvfs_float16xm4 (a, gvl);
}


float16_t test_vfmvfs_float16xm8 (float16xm8_t a, unsigned int gvl) {
    return vfmvfs_float16xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfmv\.f\.s" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfmv\.f\.s" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfmv\.f\.s" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvfmv\.f\.s" } }*/

/* { dg-final { cleanup-saved-temps } } */

