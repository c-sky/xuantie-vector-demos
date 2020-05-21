
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsswv_int16xm1 (short *address, long stride, int16xm1_t a, unsigned int gvl) {
    return vsswv_int16xm1 (address, stride, a, gvl);
}


void test_vsswv_int16xm2 (short *address, long stride, int16xm2_t a, unsigned int gvl) {
    return vsswv_int16xm2 (address, stride, a, gvl);
}


void test_vsswv_int16xm4 (short *address, long stride, int16xm4_t a, unsigned int gvl) {
    return vsswv_int16xm4 (address, stride, a, gvl);
}


void test_vsswv_int16xm8 (short *address, long stride, int16xm8_t a, unsigned int gvl) {
    return vsswv_int16xm8 (address, stride, a, gvl);
}


void test_vsswv_int32xm1 (int *address, long stride, int32xm1_t a, unsigned int gvl) {
    return vsswv_int32xm1 (address, stride, a, gvl);
}


void test_vsswv_int32xm2 (int *address, long stride, int32xm2_t a, unsigned int gvl) {
    return vsswv_int32xm2 (address, stride, a, gvl);
}


void test_vsswv_int32xm4 (int *address, long stride, int32xm4_t a, unsigned int gvl) {
    return vsswv_int32xm4 (address, stride, a, gvl);
}


void test_vsswv_int32xm8 (int *address, long stride, int32xm8_t a, unsigned int gvl) {
    return vsswv_int32xm8 (address, stride, a, gvl);
}


void test_vsswv_int64xm1 (long *address, long stride, int64xm1_t a, unsigned int gvl) {
    return vsswv_int64xm1 (address, stride, a, gvl);
}


void test_vsswv_int64xm2 (long *address, long stride, int64xm2_t a, unsigned int gvl) {
    return vsswv_int64xm2 (address, stride, a, gvl);
}


void test_vsswv_int64xm4 (long *address, long stride, int64xm4_t a, unsigned int gvl) {
    return vsswv_int64xm4 (address, stride, a, gvl);
}


void test_vsswv_int64xm8 (long *address, long stride, int64xm8_t a, unsigned int gvl) {
    return vsswv_int64xm8 (address, stride, a, gvl);
}


void test_vsswv_int8xm1 (signed char *address, long stride, int8xm1_t a, unsigned int gvl) {
    return vsswv_int8xm1 (address, stride, a, gvl);
}


void test_vsswv_int8xm2 (signed char *address, long stride, int8xm2_t a, unsigned int gvl) {
    return vsswv_int8xm2 (address, stride, a, gvl);
}


void test_vsswv_int8xm4 (signed char *address, long stride, int8xm4_t a, unsigned int gvl) {
    return vsswv_int8xm4 (address, stride, a, gvl);
}


void test_vsswv_int8xm8 (signed char *address, long stride, int8xm8_t a, unsigned int gvl) {
    return vsswv_int8xm8 (address, stride, a, gvl);
}


void test_vsswv_uint16xm1 (unsigned short *address, long stride, uint16xm1_t a, unsigned int gvl) {
    return vsswv_uint16xm1 (address, stride, a, gvl);
}


void test_vsswv_uint16xm2 (unsigned short *address, long stride, uint16xm2_t a, unsigned int gvl) {
    return vsswv_uint16xm2 (address, stride, a, gvl);
}


void test_vsswv_uint16xm4 (unsigned short *address, long stride, uint16xm4_t a, unsigned int gvl) {
    return vsswv_uint16xm4 (address, stride, a, gvl);
}


void test_vsswv_uint16xm8 (unsigned short *address, long stride, uint16xm8_t a, unsigned int gvl) {
    return vsswv_uint16xm8 (address, stride, a, gvl);
}


void test_vsswv_uint32xm1 (unsigned int *address, long stride, uint32xm1_t a, unsigned int gvl) {
    return vsswv_uint32xm1 (address, stride, a, gvl);
}


void test_vsswv_uint32xm2 (unsigned int *address, long stride, uint32xm2_t a, unsigned int gvl) {
    return vsswv_uint32xm2 (address, stride, a, gvl);
}


void test_vsswv_uint32xm4 (unsigned int *address, long stride, uint32xm4_t a, unsigned int gvl) {
    return vsswv_uint32xm4 (address, stride, a, gvl);
}


void test_vsswv_uint32xm8 (unsigned int *address, long stride, uint32xm8_t a, unsigned int gvl) {
    return vsswv_uint32xm8 (address, stride, a, gvl);
}


void test_vsswv_uint64xm1 (unsigned long *address, long stride, uint64xm1_t a, unsigned int gvl) {
    return vsswv_uint64xm1 (address, stride, a, gvl);
}


void test_vsswv_uint64xm2 (unsigned long *address, long stride, uint64xm2_t a, unsigned int gvl) {
    return vsswv_uint64xm2 (address, stride, a, gvl);
}


void test_vsswv_uint64xm4 (unsigned long *address, long stride, uint64xm4_t a, unsigned int gvl) {
    return vsswv_uint64xm4 (address, stride, a, gvl);
}


void test_vsswv_uint64xm8 (unsigned long *address, long stride, uint64xm8_t a, unsigned int gvl) {
    return vsswv_uint64xm8 (address, stride, a, gvl);
}


void test_vsswv_uint8xm1 (unsigned char *address, long stride, uint8xm1_t a, unsigned int gvl) {
    return vsswv_uint8xm1 (address, stride, a, gvl);
}


void test_vsswv_uint8xm2 (unsigned char *address, long stride, uint8xm2_t a, unsigned int gvl) {
    return vsswv_uint8xm2 (address, stride, a, gvl);
}


void test_vsswv_uint8xm4 (unsigned char *address, long stride, uint8xm4_t a, unsigned int gvl) {
    return vsswv_uint8xm4 (address, stride, a, gvl);
}


void test_vsswv_uint8xm8 (unsigned char *address, long stride, uint8xm8_t a, unsigned int gvl) {
    return vsswv_uint8xm8 (address, stride, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvssw\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvssw\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

