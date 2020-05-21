
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint32xm1_t test_vfclassv_uint32xm1_float32xm1 (float32xm1_t a, unsigned int gvl) {
    return vfclassv_uint32xm1_float32xm1 (a, gvl);
}


uint32xm2_t test_vfclassv_uint32xm2_float32xm2 (float32xm2_t a, unsigned int gvl) {
    return vfclassv_uint32xm2_float32xm2 (a, gvl);
}


uint32xm4_t test_vfclassv_uint32xm4_float32xm4 (float32xm4_t a, unsigned int gvl) {
    return vfclassv_uint32xm4_float32xm4 (a, gvl);
}


uint32xm8_t test_vfclassv_uint32xm8_float32xm8 (float32xm8_t a, unsigned int gvl) {
    return vfclassv_uint32xm8_float32xm8 (a, gvl);
}


uint64xm1_t test_vfclassv_uint64xm1_float64xm1 (float64xm1_t a, unsigned int gvl) {
    return vfclassv_uint64xm1_float64xm1 (a, gvl);
}


uint64xm2_t test_vfclassv_uint64xm2_float64xm2 (float64xm2_t a, unsigned int gvl) {
    return vfclassv_uint64xm2_float64xm2 (a, gvl);
}


uint64xm4_t test_vfclassv_uint64xm4_float64xm4 (float64xm4_t a, unsigned int gvl) {
    return vfclassv_uint64xm4_float64xm4 (a, gvl);
}


uint64xm8_t test_vfclassv_uint64xm8_float64xm8 (float64xm8_t a, unsigned int gvl) {
    return vfclassv_uint64xm8_float64xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvfclass\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

