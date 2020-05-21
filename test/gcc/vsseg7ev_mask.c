
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg7ev_mask_float32x7xm1 (float *address, float32x7xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_float32x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_float64x7xm1 (double *address, float64x7xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_float64x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_int16x7xm1 (short *address, int16x7xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_int16x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_int32x7xm1 (int *address, int32x7xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_int32x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_int64x7xm1 (long *address, int64x7xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_int64x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_int8x7xm1 (signed char *address, int8x7xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_int8x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_uint16x7xm1 (unsigned short *address, uint16x7xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_uint16x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_uint32x7xm1 (unsigned int *address, uint32x7xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_uint32x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_uint64x7xm1 (unsigned long *address, uint64x7xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_uint64x7xm1 (address, a, mask, gvl);
}


void test_vsseg7ev_mask_uint8x7xm1 (unsigned char *address, uint8x7xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsseg7ev_mask_uint8x7xm1 (address, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg7e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

