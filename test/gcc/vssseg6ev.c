
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg6ev_float32x6xm1 (float *address, long stride, float32x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_float32x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_float64x6xm1 (double *address, long stride, float64x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_float64x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_int16x6xm1 (short *address, long stride, int16x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_int16x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_int32x6xm1 (int *address, long stride, int32x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_int32x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_int64x6xm1 (long *address, long stride, int64x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_int64x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_int8x6xm1 (signed char *address, long stride, int8x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_int8x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_uint16x6xm1 (unsigned short *address, long stride, uint16x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_uint16x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_uint32x6xm1 (unsigned int *address, long stride, uint32x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_uint32x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_uint64x6xm1 (unsigned long *address, long stride, uint64x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_uint64x6xm1 (address, stride, a, gvl);
}


void test_vssseg6ev_uint8x6xm1 (unsigned char *address, long stride, uint8x6xm1_t a, unsigned int gvl) {
    return vssseg6ev_uint8x6xm1 (address, stride, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg6e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

