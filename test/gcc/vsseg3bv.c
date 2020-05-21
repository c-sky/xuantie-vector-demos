
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg3bv_int16x3xm1 (short *address, int16x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_int16x3xm1 (address, a, gvl);
}


void test_vsseg3bv_int16x3xm2 (short *address, int16x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_int16x3xm2 (address, a, gvl);
}


void test_vsseg3bv_int32x3xm1 (int *address, int32x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_int32x3xm1 (address, a, gvl);
}


void test_vsseg3bv_int32x3xm2 (int *address, int32x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_int32x3xm2 (address, a, gvl);
}


void test_vsseg3bv_int64x3xm1 (long *address, int64x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_int64x3xm1 (address, a, gvl);
}


void test_vsseg3bv_int64x3xm2 (long *address, int64x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_int64x3xm2 (address, a, gvl);
}


void test_vsseg3bv_int8x3xm1 (signed char *address, int8x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_int8x3xm1 (address, a, gvl);
}


void test_vsseg3bv_int8x3xm2 (signed char *address, int8x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_int8x3xm2 (address, a, gvl);
}


void test_vsseg3bv_uint16x3xm1 (unsigned short *address, uint16x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_uint16x3xm1 (address, a, gvl);
}


void test_vsseg3bv_uint16x3xm2 (unsigned short *address, uint16x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_uint16x3xm2 (address, a, gvl);
}


void test_vsseg3bv_uint32x3xm1 (unsigned int *address, uint32x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_uint32x3xm1 (address, a, gvl);
}


void test_vsseg3bv_uint32x3xm2 (unsigned int *address, uint32x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_uint32x3xm2 (address, a, gvl);
}


void test_vsseg3bv_uint64x3xm1 (unsigned long *address, uint64x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_uint64x3xm1 (address, a, gvl);
}


void test_vsseg3bv_uint64x3xm2 (unsigned long *address, uint64x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_uint64x3xm2 (address, a, gvl);
}


void test_vsseg3bv_uint8x3xm1 (unsigned char *address, uint8x3xm1_t a, unsigned int gvl) {
    return vsseg3bv_uint8x3xm1 (address, a, gvl);
}


void test_vsseg3bv_uint8x3xm2 (unsigned char *address, uint8x3xm2_t a, unsigned int gvl) {
    return vsseg3bv_uint8x3xm2 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsseg3b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

