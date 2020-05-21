
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vsravv_int16xm1_uint16xm1 (int16xm1_t a, uint16xm1_t b, unsigned int gvl) {
return a >> b;
}


int16xm2_t test_vsravv_int16xm2_uint16xm2 (int16xm2_t a, uint16xm2_t b, unsigned int gvl) {
return a >> b;
}


int16xm4_t test_vsravv_int16xm4_uint16xm4 (int16xm4_t a, uint16xm4_t b, unsigned int gvl) {
return a >> b;
}


int16xm8_t test_vsravv_int16xm8_uint16xm8 (int16xm8_t a, uint16xm8_t b, unsigned int gvl) {
return a >> b;
}


int32xm1_t test_vsravv_int32xm1_uint32xm1 (int32xm1_t a, uint32xm1_t b, unsigned int gvl) {
return a >> b;
}


int32xm2_t test_vsravv_int32xm2_uint32xm2 (int32xm2_t a, uint32xm2_t b, unsigned int gvl) {
return a >> b;
}


int32xm4_t test_vsravv_int32xm4_uint32xm4 (int32xm4_t a, uint32xm4_t b, unsigned int gvl) {
return a >> b;
}


int32xm8_t test_vsravv_int32xm8_uint32xm8 (int32xm8_t a, uint32xm8_t b, unsigned int gvl) {
return a >> b;
}


int64xm1_t test_vsravv_int64xm1_uint64xm1 (int64xm1_t a, uint64xm1_t b, unsigned int gvl) {
return a >> b;
}


int64xm2_t test_vsravv_int64xm2_uint64xm2 (int64xm2_t a, uint64xm2_t b, unsigned int gvl) {
return a >> b;
}


int64xm4_t test_vsravv_int64xm4_uint64xm4 (int64xm4_t a, uint64xm4_t b, unsigned int gvl) {
return a >> b;
}


int64xm8_t test_vsravv_int64xm8_uint64xm8 (int64xm8_t a, uint64xm8_t b, unsigned int gvl) {
return a >> b;
}


int8xm1_t test_vsravv_int8xm1_uint8xm1 (int8xm1_t a, uint8xm1_t b, unsigned int gvl) {
return a >> b;
}


int8xm2_t test_vsravv_int8xm2_uint8xm2 (int8xm2_t a, uint8xm2_t b, unsigned int gvl) {
return a >> b;
}


int8xm4_t test_vsravv_int8xm4_uint8xm4 (int8xm4_t a, uint8xm4_t b, unsigned int gvl) {
return a >> b;
}


int8xm8_t test_vsravv_int8xm8_uint8xm8 (int8xm8_t a, uint8xm8_t b, unsigned int gvl) {
return a >> b;
}

/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m1\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m2\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m4\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m8\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m1\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m2\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m4\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m8\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m1\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m2\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m4\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m8\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m1\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m2\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m4\n\tvsra\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m8\n\tvsra\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

