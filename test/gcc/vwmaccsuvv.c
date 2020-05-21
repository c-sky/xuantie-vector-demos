
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm2_t test_vwmaccsuvv_int16xm2_int8xm1_uint8xm1 (int8xm1_t a, uint8xm1_t b, int16xm2_t result, unsigned int gvl) {
    return vwmaccsuvv_int16xm2_int8xm1_uint8xm1 (a, b, result, gvl);
}


int16xm4_t test_vwmaccsuvv_int16xm4_int8xm2_uint8xm2 (int8xm2_t a, uint8xm2_t b, int16xm4_t result, unsigned int gvl) {
    return vwmaccsuvv_int16xm4_int8xm2_uint8xm2 (a, b, result, gvl);
}


int16xm8_t test_vwmaccsuvv_int16xm8_int8xm4_uint8xm4 (int8xm4_t a, uint8xm4_t b, int16xm8_t result, unsigned int gvl) {
    return vwmaccsuvv_int16xm8_int8xm4_uint8xm4 (a, b, result, gvl);
}


int32xm2_t test_vwmaccsuvv_int32xm2_int16xm1_uint16xm1 (int16xm1_t a, uint16xm1_t b, int32xm2_t result, unsigned int gvl) {
    return vwmaccsuvv_int32xm2_int16xm1_uint16xm1 (a, b, result, gvl);
}


int32xm4_t test_vwmaccsuvv_int32xm4_int16xm2_uint16xm2 (int16xm2_t a, uint16xm2_t b, int32xm4_t result, unsigned int gvl) {
    return vwmaccsuvv_int32xm4_int16xm2_uint16xm2 (a, b, result, gvl);
}


int32xm8_t test_vwmaccsuvv_int32xm8_int16xm4_uint16xm4 (int16xm4_t a, uint16xm4_t b, int32xm8_t result, unsigned int gvl) {
    return vwmaccsuvv_int32xm8_int16xm4_uint16xm4 (a, b, result, gvl);
}


int64xm2_t test_vwmaccsuvv_int64xm2_int32xm1_uint32xm1 (int32xm1_t a, uint32xm1_t b, int64xm2_t result, unsigned int gvl) {
    return vwmaccsuvv_int64xm2_int32xm1_uint32xm1 (a, b, result, gvl);
}


int64xm4_t test_vwmaccsuvv_int64xm4_int32xm2_uint32xm2 (int32xm2_t a, uint32xm2_t b, int64xm4_t result, unsigned int gvl) {
    return vwmaccsuvv_int64xm4_int32xm2_uint32xm2 (a, b, result, gvl);
}


int64xm8_t test_vwmaccsuvv_int64xm8_int32xm4_uint32xm4 (int32xm4_t a, uint32xm4_t b, int64xm8_t result, unsigned int gvl) {
    return vwmaccsuvv_int64xm8_int32xm4_uint32xm4 (a, b, result, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvwmaccsu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvwmaccsu\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

