
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg6bv_mask_int16xm1_int16x6xm1 (short *address, int16xm1_t index, int16x6xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_int16xm1_int16x6xm1 (address, index, a, mask, gvl);
}


void test_vsxseg6bv_mask_int32xm1_int32x6xm1 (int *address, int32xm1_t index, int32x6xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_int32xm1_int32x6xm1 (address, index, a, mask, gvl);
}


void test_vsxseg6bv_mask_int64xm1_int64x6xm1 (long *address, int64xm1_t index, int64x6xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_int64xm1_int64x6xm1 (address, index, a, mask, gvl);
}


void test_vsxseg6bv_mask_int8xm1_int8x6xm1 (signed char *address, int8xm1_t index, int8x6xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_int8xm1_int8x6xm1 (address, index, a, mask, gvl);
}


void test_vsxseg6bv_mask_uint16xm1_uint16x6xm1 (unsigned short *address, uint16xm1_t index, uint16x6xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_uint16xm1_uint16x6xm1 (address, index, a, mask, gvl);
}


void test_vsxseg6bv_mask_uint32xm1_uint32x6xm1 (unsigned int *address, uint32xm1_t index, uint32x6xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_uint32xm1_uint32x6xm1 (address, index, a, mask, gvl);
}


void test_vsxseg6bv_mask_uint64xm1_uint64x6xm1 (unsigned long *address, uint64xm1_t index, uint64x6xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_uint64xm1_uint64x6xm1 (address, index, a, mask, gvl);
}


void test_vsxseg6bv_mask_uint8xm1_uint8x6xm1 (unsigned char *address, uint8xm1_t index, uint8x6xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsxseg6bv_mask_uint8xm1_uint8x6xm1 (address, index, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg6b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg6b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg6b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg6b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg6b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg6b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg6b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg6b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

