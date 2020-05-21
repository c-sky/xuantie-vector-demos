
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg8ev_float32x8xm1 (float *address, float32x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_float32x8xm1 (address, a, gvl);
}


void test_vsseg8ev_float64x8xm1 (double *address, float64x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_float64x8xm1 (address, a, gvl);
}


void test_vsseg8ev_int16x8xm1 (short *address, int16x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_int16x8xm1 (address, a, gvl);
}


void test_vsseg8ev_int32x8xm1 (int *address, int32x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_int32x8xm1 (address, a, gvl);
}


void test_vsseg8ev_int64x8xm1 (long *address, int64x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_int64x8xm1 (address, a, gvl);
}


void test_vsseg8ev_int8x8xm1 (signed char *address, int8x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_int8x8xm1 (address, a, gvl);
}


void test_vsseg8ev_uint16x8xm1 (unsigned short *address, uint16x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_uint16x8xm1 (address, a, gvl);
}


void test_vsseg8ev_uint32x8xm1 (unsigned int *address, uint32x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_uint32x8xm1 (address, a, gvl);
}


void test_vsseg8ev_uint64x8xm1 (unsigned long *address, uint64x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_uint64x8xm1 (address, a, gvl);
}


void test_vsseg8ev_uint8x8xm1 (unsigned char *address, uint8x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_uint8x8xm1 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg8e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

