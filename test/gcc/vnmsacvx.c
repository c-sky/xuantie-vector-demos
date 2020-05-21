
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vnmsacvx_int16xm1 (short a, int16xm1_t b, int16xm1_t result, unsigned int gvl) {
    return vnmsacvx_int16xm1 (a, b, result, gvl);
}


int16xm2_t test_vnmsacvx_int16xm2 (short a, int16xm2_t b, int16xm2_t result, unsigned int gvl) {
    return vnmsacvx_int16xm2 (a, b, result, gvl);
}


int16xm4_t test_vnmsacvx_int16xm4 (short a, int16xm4_t b, int16xm4_t result, unsigned int gvl) {
    return vnmsacvx_int16xm4 (a, b, result, gvl);
}


int16xm8_t test_vnmsacvx_int16xm8 (short a, int16xm8_t b, int16xm8_t result, unsigned int gvl) {
    return vnmsacvx_int16xm8 (a, b, result, gvl);
}


int32xm1_t test_vnmsacvx_int32xm1 (int a, int32xm1_t b, int32xm1_t result, unsigned int gvl) {
    return vnmsacvx_int32xm1 (a, b, result, gvl);
}


int32xm2_t test_vnmsacvx_int32xm2 (int a, int32xm2_t b, int32xm2_t result, unsigned int gvl) {
    return vnmsacvx_int32xm2 (a, b, result, gvl);
}


int32xm4_t test_vnmsacvx_int32xm4 (int a, int32xm4_t b, int32xm4_t result, unsigned int gvl) {
    return vnmsacvx_int32xm4 (a, b, result, gvl);
}


int32xm8_t test_vnmsacvx_int32xm8 (int a, int32xm8_t b, int32xm8_t result, unsigned int gvl) {
    return vnmsacvx_int32xm8 (a, b, result, gvl);
}


int64xm1_t test_vnmsacvx_int64xm1 (long a, int64xm1_t b, int64xm1_t result, unsigned int gvl) {
    return vnmsacvx_int64xm1 (a, b, result, gvl);
}


int64xm2_t test_vnmsacvx_int64xm2 (long a, int64xm2_t b, int64xm2_t result, unsigned int gvl) {
    return vnmsacvx_int64xm2 (a, b, result, gvl);
}


int64xm4_t test_vnmsacvx_int64xm4 (long a, int64xm4_t b, int64xm4_t result, unsigned int gvl) {
    return vnmsacvx_int64xm4 (a, b, result, gvl);
}


int64xm8_t test_vnmsacvx_int64xm8 (long a, int64xm8_t b, int64xm8_t result, unsigned int gvl) {
    return vnmsacvx_int64xm8 (a, b, result, gvl);
}


int8xm1_t test_vnmsacvx_int8xm1 (signed char a, int8xm1_t b, int8xm1_t result, unsigned int gvl) {
    return vnmsacvx_int8xm1 (a, b, result, gvl);
}


int8xm2_t test_vnmsacvx_int8xm2 (signed char a, int8xm2_t b, int8xm2_t result, unsigned int gvl) {
    return vnmsacvx_int8xm2 (a, b, result, gvl);
}


int8xm4_t test_vnmsacvx_int8xm4 (signed char a, int8xm4_t b, int8xm4_t result, unsigned int gvl) {
    return vnmsacvx_int8xm4 (a, b, result, gvl);
}


int8xm8_t test_vnmsacvx_int8xm8 (signed char a, int8xm8_t b, int8xm8_t result, unsigned int gvl) {
    return vnmsacvx_int8xm8 (a, b, result, gvl);
}


uint16xm1_t test_vnmsacvx_uint16xm1 (unsigned short a, uint16xm1_t b, uint16xm1_t result, unsigned int gvl) {
    return vnmsacvx_uint16xm1 (a, b, result, gvl);
}


uint16xm2_t test_vnmsacvx_uint16xm2 (unsigned short a, uint16xm2_t b, uint16xm2_t result, unsigned int gvl) {
    return vnmsacvx_uint16xm2 (a, b, result, gvl);
}


uint16xm4_t test_vnmsacvx_uint16xm4 (unsigned short a, uint16xm4_t b, uint16xm4_t result, unsigned int gvl) {
    return vnmsacvx_uint16xm4 (a, b, result, gvl);
}


uint16xm8_t test_vnmsacvx_uint16xm8 (unsigned short a, uint16xm8_t b, uint16xm8_t result, unsigned int gvl) {
    return vnmsacvx_uint16xm8 (a, b, result, gvl);
}


uint32xm1_t test_vnmsacvx_uint32xm1 (unsigned int a, uint32xm1_t b, uint32xm1_t result, unsigned int gvl) {
    return vnmsacvx_uint32xm1 (a, b, result, gvl);
}


uint32xm2_t test_vnmsacvx_uint32xm2 (unsigned int a, uint32xm2_t b, uint32xm2_t result, unsigned int gvl) {
    return vnmsacvx_uint32xm2 (a, b, result, gvl);
}


uint32xm4_t test_vnmsacvx_uint32xm4 (unsigned int a, uint32xm4_t b, uint32xm4_t result, unsigned int gvl) {
    return vnmsacvx_uint32xm4 (a, b, result, gvl);
}


uint32xm8_t test_vnmsacvx_uint32xm8 (unsigned int a, uint32xm8_t b, uint32xm8_t result, unsigned int gvl) {
    return vnmsacvx_uint32xm8 (a, b, result, gvl);
}


uint64xm1_t test_vnmsacvx_uint64xm1 (unsigned long a, uint64xm1_t b, uint64xm1_t result, unsigned int gvl) {
    return vnmsacvx_uint64xm1 (a, b, result, gvl);
}


uint64xm2_t test_vnmsacvx_uint64xm2 (unsigned long a, uint64xm2_t b, uint64xm2_t result, unsigned int gvl) {
    return vnmsacvx_uint64xm2 (a, b, result, gvl);
}


uint64xm4_t test_vnmsacvx_uint64xm4 (unsigned long a, uint64xm4_t b, uint64xm4_t result, unsigned int gvl) {
    return vnmsacvx_uint64xm4 (a, b, result, gvl);
}


uint64xm8_t test_vnmsacvx_uint64xm8 (unsigned long a, uint64xm8_t b, uint64xm8_t result, unsigned int gvl) {
    return vnmsacvx_uint64xm8 (a, b, result, gvl);
}


uint8xm1_t test_vnmsacvx_uint8xm1 (unsigned char a, uint8xm1_t b, uint8xm1_t result, unsigned int gvl) {
    return vnmsacvx_uint8xm1 (a, b, result, gvl);
}


uint8xm2_t test_vnmsacvx_uint8xm2 (unsigned char a, uint8xm2_t b, uint8xm2_t result, unsigned int gvl) {
    return vnmsacvx_uint8xm2 (a, b, result, gvl);
}


uint8xm4_t test_vnmsacvx_uint8xm4 (unsigned char a, uint8xm4_t b, uint8xm4_t result, unsigned int gvl) {
    return vnmsacvx_uint8xm4 (a, b, result, gvl);
}


uint8xm8_t test_vnmsacvx_uint8xm8 (unsigned char a, uint8xm8_t b, uint8xm8_t result, unsigned int gvl) {
    return vnmsacvx_uint8xm8 (a, b, result, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvnmsac\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvnmsac\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

