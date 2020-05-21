
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg7bv_int16x7xm1 (short *address, int16x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_int16x7xm1 (address, a, gvl);
}


void test_vsseg7bv_int32x7xm1 (int *address, int32x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_int32x7xm1 (address, a, gvl);
}


void test_vsseg7bv_int64x7xm1 (long *address, int64x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_int64x7xm1 (address, a, gvl);
}


void test_vsseg7bv_int8x7xm1 (signed char *address, int8x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_int8x7xm1 (address, a, gvl);
}


void test_vsseg7bv_uint16x7xm1 (unsigned short *address, uint16x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_uint16x7xm1 (address, a, gvl);
}


void test_vsseg7bv_uint32x7xm1 (unsigned int *address, uint32x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_uint32x7xm1 (address, a, gvl);
}


void test_vsseg7bv_uint64x7xm1 (unsigned long *address, uint64x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_uint64x7xm1 (address, a, gvl);
}


void test_vsseg7bv_uint8x7xm1 (unsigned char *address, uint8x7xm1_t a, unsigned int gvl) {
    return vsseg7bv_uint8x7xm1 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg7b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

