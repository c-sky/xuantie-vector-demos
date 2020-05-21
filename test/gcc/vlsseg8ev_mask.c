
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x8xm1_t test_vlsseg8ev_mask_float32x8xm1 (float32x8xm1_t merge, const float *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_float32x8xm1 (merge, address, stride, mask, gvl);
}


float64x8xm1_t test_vlsseg8ev_mask_float64x8xm1 (float64x8xm1_t merge, const double *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_float64x8xm1 (merge, address, stride, mask, gvl);
}


int16x8xm1_t test_vlsseg8ev_mask_int16x8xm1 (int16x8xm1_t merge, const short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_int16x8xm1 (merge, address, stride, mask, gvl);
}


int32x8xm1_t test_vlsseg8ev_mask_int32x8xm1 (int32x8xm1_t merge, const int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_int32x8xm1 (merge, address, stride, mask, gvl);
}


int64x8xm1_t test_vlsseg8ev_mask_int64x8xm1 (int64x8xm1_t merge, const long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_int64x8xm1 (merge, address, stride, mask, gvl);
}


int8x8xm1_t test_vlsseg8ev_mask_int8x8xm1 (int8x8xm1_t merge, const signed char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_int8x8xm1 (merge, address, stride, mask, gvl);
}


uint16x8xm1_t test_vlsseg8ev_mask_uint16x8xm1 (uint16x8xm1_t merge, const unsigned short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_uint16x8xm1 (merge, address, stride, mask, gvl);
}


uint32x8xm1_t test_vlsseg8ev_mask_uint32x8xm1 (uint32x8xm1_t merge, const unsigned int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_uint32x8xm1 (merge, address, stride, mask, gvl);
}


uint64x8xm1_t test_vlsseg8ev_mask_uint64x8xm1 (uint64x8xm1_t merge, const unsigned long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_uint64x8xm1 (merge, address, stride, mask, gvl);
}


uint8x8xm1_t test_vlsseg8ev_mask_uint8x8xm1 (uint8x8xm1_t merge, const unsigned char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlsseg8ev_mask_uint8x8xm1 (merge, address, stride, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg8e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

