
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vfncvtxfv_int16xm1_float32xm2 (float32xm2_t a, unsigned int gvl) {
    return vfncvtxfv_int16xm1_float32xm2 (a, gvl);
}


int16xm2_t test_vfncvtxfv_int16xm2_float32xm4 (float32xm4_t a, unsigned int gvl) {
    return vfncvtxfv_int16xm2_float32xm4 (a, gvl);
}


int16xm4_t test_vfncvtxfv_int16xm4_float32xm8 (float32xm8_t a, unsigned int gvl) {
    return vfncvtxfv_int16xm4_float32xm8 (a, gvl);
}


int32xm1_t test_vfncvtxfv_int32xm1_float64xm2 (float64xm2_t a, unsigned int gvl) {
    return vfncvtxfv_int32xm1_float64xm2 (a, gvl);
}


int32xm2_t test_vfncvtxfv_int32xm2_float64xm4 (float64xm4_t a, unsigned int gvl) {
    return vfncvtxfv_int32xm2_float64xm4 (a, gvl);
}


int32xm4_t test_vfncvtxfv_int32xm4_float64xm8 (float64xm8_t a, unsigned int gvl) {
    return vfncvtxfv_int32xm4_float64xm8 (a, gvl);
}


int8xm1_t test_vfncvtxfv_int8xm1_float16xm2 (float16xm2_t a, unsigned int gvl) {
    return vfncvtxfv_int8xm1_float16xm2 (a, gvl);
}


int8xm2_t test_vfncvtxfv_int8xm2_float16xm4 (float16xm4_t a, unsigned int gvl) {
    return vfncvtxfv_int8xm2_float16xm4 (a, gvl);
}


int8xm4_t test_vfncvtxfv_int8xm4_float16xm8 (float16xm8_t a, unsigned int gvl) {
    return vfncvtxfv_int8xm4_float16xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvfncvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvfncvt\.x\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

