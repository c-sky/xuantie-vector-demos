
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int64xm2_t test_vfwcvtxfv_int64xm2_float32xm1 (float32xm1_t a, unsigned int gvl) {
    return vfwcvtxfv_int64xm2_float32xm1 (a, gvl);
}


int64xm4_t test_vfwcvtxfv_int64xm4_float32xm2 (float32xm2_t a, unsigned int gvl) {
    return vfwcvtxfv_int64xm4_float32xm2 (a, gvl);
}


int64xm8_t test_vfwcvtxfv_int64xm8_float32xm4 (float32xm4_t a, unsigned int gvl) {
    return vfwcvtxfv_int64xm8_float32xm4 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfwcvt\.x\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

