
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vfcvtxfv_int16xm1_float16xm1 (float16xm1_t a, unsigned int gvl) {
    return vfcvtxfv_int16xm1_float16xm1 (a, gvl);
}


int16xm2_t test_vfcvtxfv_int16xm2_float16xm2 (float16xm2_t a, unsigned int gvl) {
    return vfcvtxfv_int16xm2_float16xm2 (a, gvl);
}


int16xm4_t test_vfcvtxfv_int16xm4_float16xm4 (float16xm4_t a, unsigned int gvl) {
    return vfcvtxfv_int16xm4_float16xm4 (a, gvl);
}


int16xm8_t test_vfcvtxfv_int16xm8_float16xm8 (float16xm8_t a, unsigned int gvl) {
    return vfcvtxfv_int16xm8_float16xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvfcvt\.x\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

