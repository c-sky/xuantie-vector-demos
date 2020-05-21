
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg7ev_float32x7xm1 (float *address, long stride, float32x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_float32x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_float64x7xm1 (double *address, long stride, float64x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_float64x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_int16x7xm1 (short *address, long stride, int16x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_int16x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_int32x7xm1 (int *address, long stride, int32x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_int32x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_int64x7xm1 (long *address, long stride, int64x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_int64x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_int8x7xm1 (signed char *address, long stride, int8x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_int8x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_uint16x7xm1 (unsigned short *address, long stride, uint16x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_uint16x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_uint32x7xm1 (unsigned int *address, long stride, uint32x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_uint32x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_uint64x7xm1 (unsigned long *address, long stride, uint64x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_uint64x7xm1 (address, stride, a, gvl);
}


void test_vssseg7ev_uint8x7xm1 (unsigned char *address, long stride, uint8x7xm1_t a, unsigned int gvl) {
    return vssseg7ev_uint8x7xm1 (address, stride, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg7e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */
