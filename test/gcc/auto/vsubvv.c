
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vsubvv_int16xm1 (int16xm1_t a, int16xm1_t b, unsigned int gvl) {
return a - b;
}


int16xm2_t test_vsubvv_int16xm2 (int16xm2_t a, int16xm2_t b, unsigned int gvl) {
return a - b;
}


int16xm4_t test_vsubvv_int16xm4 (int16xm4_t a, int16xm4_t b, unsigned int gvl) {
return a - b;
}


int16xm8_t test_vsubvv_int16xm8 (int16xm8_t a, int16xm8_t b, unsigned int gvl) {
return a - b;
}


int32xm1_t test_vsubvv_int32xm1 (int32xm1_t a, int32xm1_t b, unsigned int gvl) {
return a - b;
}


int32xm2_t test_vsubvv_int32xm2 (int32xm2_t a, int32xm2_t b, unsigned int gvl) {
return a - b;
}


int32xm4_t test_vsubvv_int32xm4 (int32xm4_t a, int32xm4_t b, unsigned int gvl) {
return a - b;
}


int32xm8_t test_vsubvv_int32xm8 (int32xm8_t a, int32xm8_t b, unsigned int gvl) {
return a - b;
}


int64xm1_t test_vsubvv_int64xm1 (int64xm1_t a, int64xm1_t b, unsigned int gvl) {
return a - b;
}


int64xm2_t test_vsubvv_int64xm2 (int64xm2_t a, int64xm2_t b, unsigned int gvl) {
return a - b;
}


int64xm4_t test_vsubvv_int64xm4 (int64xm4_t a, int64xm4_t b, unsigned int gvl) {
return a - b;
}


int64xm8_t test_vsubvv_int64xm8 (int64xm8_t a, int64xm8_t b, unsigned int gvl) {
return a - b;
}


int8xm1_t test_vsubvv_int8xm1 (int8xm1_t a, int8xm1_t b, unsigned int gvl) {
return a - b;
}


int8xm2_t test_vsubvv_int8xm2 (int8xm2_t a, int8xm2_t b, unsigned int gvl) {
return a - b;
}


int8xm4_t test_vsubvv_int8xm4 (int8xm4_t a, int8xm4_t b, unsigned int gvl) {
return a - b;
}


int8xm8_t test_vsubvv_int8xm8 (int8xm8_t a, int8xm8_t b, unsigned int gvl) {
return a - b;
}


uint16xm1_t test_vsubvv_uint16xm1 (uint16xm1_t a, uint16xm1_t b, unsigned int gvl) {
return a - b;
}


uint16xm2_t test_vsubvv_uint16xm2 (uint16xm2_t a, uint16xm2_t b, unsigned int gvl) {
return a - b;
}


uint16xm4_t test_vsubvv_uint16xm4 (uint16xm4_t a, uint16xm4_t b, unsigned int gvl) {
return a - b;
}


uint16xm8_t test_vsubvv_uint16xm8 (uint16xm8_t a, uint16xm8_t b, unsigned int gvl) {
return a - b;
}


uint32xm1_t test_vsubvv_uint32xm1 (uint32xm1_t a, uint32xm1_t b, unsigned int gvl) {
return a - b;
}


uint32xm2_t test_vsubvv_uint32xm2 (uint32xm2_t a, uint32xm2_t b, unsigned int gvl) {
return a - b;
}


uint32xm4_t test_vsubvv_uint32xm4 (uint32xm4_t a, uint32xm4_t b, unsigned int gvl) {
return a - b;
}


uint32xm8_t test_vsubvv_uint32xm8 (uint32xm8_t a, uint32xm8_t b, unsigned int gvl) {
return a - b;
}


uint64xm1_t test_vsubvv_uint64xm1 (uint64xm1_t a, uint64xm1_t b, unsigned int gvl) {
return a - b;
}


uint64xm2_t test_vsubvv_uint64xm2 (uint64xm2_t a, uint64xm2_t b, unsigned int gvl) {
return a - b;
}


uint64xm4_t test_vsubvv_uint64xm4 (uint64xm4_t a, uint64xm4_t b, unsigned int gvl) {
return a - b;
}


uint64xm8_t test_vsubvv_uint64xm8 (uint64xm8_t a, uint64xm8_t b, unsigned int gvl) {
return a - b;
}


uint8xm1_t test_vsubvv_uint8xm1 (uint8xm1_t a, uint8xm1_t b, unsigned int gvl) {
return a - b;
}


uint8xm2_t test_vsubvv_uint8xm2 (uint8xm2_t a, uint8xm2_t b, unsigned int gvl) {
return a - b;
}


uint8xm4_t test_vsubvv_uint8xm4 (uint8xm4_t a, uint8xm4_t b, unsigned int gvl) {
return a - b;
}


uint8xm8_t test_vsubvv_uint8xm8 (uint8xm8_t a, uint8xm8_t b, unsigned int gvl) {
return a - b;
}

/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m8\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m8\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m8\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m8\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e16,m8\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m8\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m8\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m1\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m2\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m4\n\tvsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e8,m8\n\tvsub\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

