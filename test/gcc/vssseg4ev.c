
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg4ev_float32x4xm1 (float *address, long stride, float32x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_float32x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_float32x4xm2 (float *address, long stride, float32x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_float32x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_float64x4xm1 (double *address, long stride, float64x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_float64x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_float64x4xm2 (double *address, long stride, float64x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_float64x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_int16x4xm1 (short *address, long stride, int16x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_int16x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_int16x4xm2 (short *address, long stride, int16x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_int16x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_int32x4xm1 (int *address, long stride, int32x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_int32x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_int32x4xm2 (int *address, long stride, int32x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_int32x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_int64x4xm1 (long *address, long stride, int64x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_int64x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_int64x4xm2 (long *address, long stride, int64x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_int64x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_int8x4xm1 (signed char *address, long stride, int8x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_int8x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_int8x4xm2 (signed char *address, long stride, int8x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_int8x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_uint16x4xm1 (unsigned short *address, long stride, uint16x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_uint16x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_uint16x4xm2 (unsigned short *address, long stride, uint16x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_uint16x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_uint32x4xm1 (unsigned int *address, long stride, uint32x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_uint32x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_uint32x4xm2 (unsigned int *address, long stride, uint32x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_uint32x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_uint64x4xm1 (unsigned long *address, long stride, uint64x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_uint64x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_uint64x4xm2 (unsigned long *address, long stride, uint64x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_uint64x4xm2 (address, stride, a, gvl);
}


void test_vssseg4ev_uint8x4xm1 (unsigned char *address, long stride, uint8x4xm1_t a, unsigned int gvl) {
    return vssseg4ev_uint8x4xm1 (address, stride, a, gvl);
}


void test_vssseg4ev_uint8x4xm2 (unsigned char *address, long stride, uint8x4xm2_t a, unsigned int gvl) {
    return vssseg4ev_uint8x4xm2 (address, stride, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvssseg4e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

