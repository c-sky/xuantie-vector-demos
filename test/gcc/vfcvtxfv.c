
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int32xm1_t test_vfcvtxfv_int32xm1_float32xm1 (float32xm1_t a, unsigned int gvl) {
    return vfcvtxfv_int32xm1_float32xm1 (a, gvl);
}


int32xm2_t test_vfcvtxfv_int32xm2_float32xm2 (float32xm2_t a, unsigned int gvl) {
    return vfcvtxfv_int32xm2_float32xm2 (a, gvl);
}


int32xm4_t test_vfcvtxfv_int32xm4_float32xm4 (float32xm4_t a, unsigned int gvl) {
    return vfcvtxfv_int32xm4_float32xm4 (a, gvl);
}


int32xm8_t test_vfcvtxfv_int32xm8_float32xm8 (float32xm8_t a, unsigned int gvl) {
    return vfcvtxfv_int32xm8_float32xm8 (a, gvl);
}


int64xm1_t test_vfcvtxfv_int64xm1_float64xm1 (float64xm1_t a, unsigned int gvl) {
    return vfcvtxfv_int64xm1_float64xm1 (a, gvl);
}


int64xm2_t test_vfcvtxfv_int64xm2_float64xm2 (float64xm2_t a, unsigned int gvl) {
    return vfcvtxfv_int64xm2_float64xm2 (a, gvl);
}


int64xm4_t test_vfcvtxfv_int64xm4_float64xm4 (float64xm4_t a, unsigned int gvl) {
    return vfcvtxfv_int64xm4_float64xm4 (a, gvl);
}


int64xm8_t test_vfcvtxfv_int64xm8_float64xm8 (float64xm8_t a, unsigned int gvl) {
    return vfcvtxfv_int64xm8_float64xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvfcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvfcvt\.x\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

