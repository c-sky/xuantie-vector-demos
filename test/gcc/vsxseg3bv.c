
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg3bv_int16xm1_int16x3xm1 (short *address, int16xm1_t index, int16x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_int16xm1_int16x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_int16xm2_int16x3xm2 (short *address, int16xm2_t index, int16x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_int16xm2_int16x3xm2 (address, index, a, gvl);
}


void test_vsxseg3bv_int32xm1_int32x3xm1 (int *address, int32xm1_t index, int32x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_int32xm1_int32x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_int32xm2_int32x3xm2 (int *address, int32xm2_t index, int32x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_int32xm2_int32x3xm2 (address, index, a, gvl);
}


void test_vsxseg3bv_int64xm1_int64x3xm1 (long *address, int64xm1_t index, int64x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_int64xm1_int64x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_int64xm2_int64x3xm2 (long *address, int64xm2_t index, int64x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_int64xm2_int64x3xm2 (address, index, a, gvl);
}


void test_vsxseg3bv_int8xm1_int8x3xm1 (signed char *address, int8xm1_t index, int8x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_int8xm1_int8x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_int8xm2_int8x3xm2 (signed char *address, int8xm2_t index, int8x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_int8xm2_int8x3xm2 (address, index, a, gvl);
}


void test_vsxseg3bv_uint16xm1_uint16x3xm1 (unsigned short *address, uint16xm1_t index, uint16x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_uint16xm1_uint16x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_uint16xm2_uint16x3xm2 (unsigned short *address, uint16xm2_t index, uint16x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_uint16xm2_uint16x3xm2 (address, index, a, gvl);
}


void test_vsxseg3bv_uint32xm1_uint32x3xm1 (unsigned int *address, uint32xm1_t index, uint32x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_uint32xm1_uint32x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_uint32xm2_uint32x3xm2 (unsigned int *address, uint32xm2_t index, uint32x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_uint32xm2_uint32x3xm2 (address, index, a, gvl);
}


void test_vsxseg3bv_uint64xm1_uint64x3xm1 (unsigned long *address, uint64xm1_t index, uint64x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_uint64xm1_uint64x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_uint64xm2_uint64x3xm2 (unsigned long *address, uint64xm2_t index, uint64x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_uint64xm2_uint64x3xm2 (address, index, a, gvl);
}


void test_vsxseg3bv_uint8xm1_uint8x3xm1 (unsigned char *address, uint8xm1_t index, uint8x3xm1_t a, unsigned int gvl) {
    return vsxseg3bv_uint8xm1_uint8x3xm1 (address, index, a, gvl);
}


void test_vsxseg3bv_uint8xm2_uint8x3xm2 (unsigned char *address, uint8xm2_t index, uint8x3xm2_t a, unsigned int gvl) {
    return vsxseg3bv_uint8xm2_uint8x3xm2 (address, index, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsxseg3b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

