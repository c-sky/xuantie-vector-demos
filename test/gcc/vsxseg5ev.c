
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg5ev_float32xm1_float32x5xm1 (float *address, float32xm1_t index, float32x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_float32xm1_float32x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_float64xm1_float64x5xm1 (double *address, float64xm1_t index, float64x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_float64xm1_float64x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_int16xm1_int16x5xm1 (short *address, int16xm1_t index, int16x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_int16xm1_int16x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_int32xm1_int32x5xm1 (int *address, int32xm1_t index, int32x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_int32xm1_int32x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_int64xm1_int64x5xm1 (long *address, int64xm1_t index, int64x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_int64xm1_int64x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_int8xm1_int8x5xm1 (signed char *address, int8xm1_t index, int8x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_int8xm1_int8x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_uint16xm1_uint16x5xm1 (unsigned short *address, uint16xm1_t index, uint16x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_uint16xm1_uint16x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_uint32xm1_uint32x5xm1 (unsigned int *address, uint32xm1_t index, uint32x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_uint32xm1_uint32x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_uint64xm1_uint64x5xm1 (unsigned long *address, uint64xm1_t index, uint64x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_uint64xm1_uint64x5xm1 (address, index, a, gvl);
}


void test_vsxseg5ev_uint8xm1_uint8x5xm1 (unsigned char *address, uint8xm1_t index, uint8x5xm1_t a, unsigned int gvl) {
    return vsxseg5ev_uint8xm1_uint8x5xm1 (address, index, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg5e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

