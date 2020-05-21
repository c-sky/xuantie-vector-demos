
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm2_t test_vwmaccvx_int16xm2_int8xm1 (signed char a, int8xm1_t b, int16xm2_t result, unsigned int gvl) {
    return vwmaccvx_int16xm2_int8xm1 (a, b, result, gvl);
}


int16xm4_t test_vwmaccvx_int16xm4_int8xm2 (signed char a, int8xm2_t b, int16xm4_t result, unsigned int gvl) {
    return vwmaccvx_int16xm4_int8xm2 (a, b, result, gvl);
}


int16xm8_t test_vwmaccvx_int16xm8_int8xm4 (signed char a, int8xm4_t b, int16xm8_t result, unsigned int gvl) {
    return vwmaccvx_int16xm8_int8xm4 (a, b, result, gvl);
}


int32xm2_t test_vwmaccvx_int32xm2_int16xm1 (short a, int16xm1_t b, int32xm2_t result, unsigned int gvl) {
    return vwmaccvx_int32xm2_int16xm1 (a, b, result, gvl);
}


int32xm4_t test_vwmaccvx_int32xm4_int16xm2 (short a, int16xm2_t b, int32xm4_t result, unsigned int gvl) {
    return vwmaccvx_int32xm4_int16xm2 (a, b, result, gvl);
}


int32xm8_t test_vwmaccvx_int32xm8_int16xm4 (short a, int16xm4_t b, int32xm8_t result, unsigned int gvl) {
    return vwmaccvx_int32xm8_int16xm4 (a, b, result, gvl);
}


int64xm2_t test_vwmaccvx_int64xm2_int32xm1 (int a, int32xm1_t b, int64xm2_t result, unsigned int gvl) {
    return vwmaccvx_int64xm2_int32xm1 (a, b, result, gvl);
}


int64xm4_t test_vwmaccvx_int64xm4_int32xm2 (int a, int32xm2_t b, int64xm4_t result, unsigned int gvl) {
    return vwmaccvx_int64xm4_int32xm2 (a, b, result, gvl);
}


int64xm8_t test_vwmaccvx_int64xm8_int32xm4 (int a, int32xm4_t b, int64xm8_t result, unsigned int gvl) {
    return vwmaccvx_int64xm8_int32xm4 (a, b, result, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvwmacc\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvwmacc\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

