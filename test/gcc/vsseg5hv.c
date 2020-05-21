
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg5hv_int16x5xm1 (short *address, int16x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_int16x5xm1 (address, a, gvl);
}


void test_vsseg5hv_int32x5xm1 (int *address, int32x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_int32x5xm1 (address, a, gvl);
}


void test_vsseg5hv_int64x5xm1 (long *address, int64x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_int64x5xm1 (address, a, gvl);
}


void test_vsseg5hv_int8x5xm1 (signed char *address, int8x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_int8x5xm1 (address, a, gvl);
}


void test_vsseg5hv_uint16x5xm1 (unsigned short *address, uint16x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_uint16x5xm1 (address, a, gvl);
}


void test_vsseg5hv_uint32x5xm1 (unsigned int *address, uint32x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_uint32x5xm1 (address, a, gvl);
}


void test_vsseg5hv_uint64x5xm1 (unsigned long *address, uint64x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_uint64x5xm1 (address, a, gvl);
}


void test_vsseg5hv_uint8x5xm1 (unsigned char *address, uint8x5xm1_t a, unsigned int gvl) {
    return vsseg5hv_uint8x5xm1 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg5h\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */
