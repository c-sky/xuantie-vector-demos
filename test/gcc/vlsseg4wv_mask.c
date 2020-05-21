
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x4xm1_t test_vlsseg4wv_mask_int16x4xm1 (int16x4xm1_t merge, const short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int16x4xm1 (merge, address, stride, mask, gvl);
}


int16x4xm2_t test_vlsseg4wv_mask_int16x4xm2 (int16x4xm2_t merge, const short *address, long stride, e16xm2_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int16x4xm2 (merge, address, stride, mask, gvl);
}


int32x4xm1_t test_vlsseg4wv_mask_int32x4xm1 (int32x4xm1_t merge, const int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int32x4xm1 (merge, address, stride, mask, gvl);
}


int32x4xm2_t test_vlsseg4wv_mask_int32x4xm2 (int32x4xm2_t merge, const int *address, long stride, e32xm2_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int32x4xm2 (merge, address, stride, mask, gvl);
}


int64x4xm1_t test_vlsseg4wv_mask_int64x4xm1 (int64x4xm1_t merge, const long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int64x4xm1 (merge, address, stride, mask, gvl);
}


int64x4xm2_t test_vlsseg4wv_mask_int64x4xm2 (int64x4xm2_t merge, const long *address, long stride, e64xm2_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int64x4xm2 (merge, address, stride, mask, gvl);
}


int8x4xm1_t test_vlsseg4wv_mask_int8x4xm1 (int8x4xm1_t merge, const signed char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int8x4xm1 (merge, address, stride, mask, gvl);
}


int8x4xm2_t test_vlsseg4wv_mask_int8x4xm2 (int8x4xm2_t merge, const signed char *address, long stride, e8xm2_t mask, unsigned int gvl) {
    return vlsseg4wv_mask_int8x4xm2 (merge, address, stride, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg4w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlsseg4w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg4w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlsseg4w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg4w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlsseg4w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg4w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlsseg4w\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

