
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg8bv_mask_int16x8xm1 (short *address, long stride, int16x8xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_int16x8xm1 (address, stride, a, mask, gvl);
}


void test_vssseg8bv_mask_int32x8xm1 (int *address, long stride, int32x8xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_int32x8xm1 (address, stride, a, mask, gvl);
}


void test_vssseg8bv_mask_int64x8xm1 (long *address, long stride, int64x8xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_int64x8xm1 (address, stride, a, mask, gvl);
}


void test_vssseg8bv_mask_int8x8xm1 (signed char *address, long stride, int8x8xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_int8x8xm1 (address, stride, a, mask, gvl);
}


void test_vssseg8bv_mask_uint16x8xm1 (unsigned short *address, long stride, uint16x8xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_uint16x8xm1 (address, stride, a, mask, gvl);
}


void test_vssseg8bv_mask_uint32x8xm1 (unsigned int *address, long stride, uint32x8xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_uint32x8xm1 (address, stride, a, mask, gvl);
}


void test_vssseg8bv_mask_uint64x8xm1 (unsigned long *address, long stride, uint64x8xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_uint64x8xm1 (address, stride, a, mask, gvl);
}


void test_vssseg8bv_mask_uint8x8xm1 (unsigned char *address, long stride, uint8x8xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vssseg8bv_mask_uint8x8xm1 (address, stride, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvssseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvssseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvssseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvssseg8b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

