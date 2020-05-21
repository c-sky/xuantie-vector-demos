
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x5xm1_t test_vlsseg5wuv_mask_uint16x5xm1 (uint16x5xm1_t merge, const unsigned short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlsseg5wuv_mask_uint16x5xm1 (merge, address, stride, mask, gvl);
}


uint32x5xm1_t test_vlsseg5wuv_mask_uint32x5xm1 (uint32x5xm1_t merge, const unsigned int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg5wuv_mask_uint32x5xm1 (merge, address, stride, mask, gvl);
}


uint64x5xm1_t test_vlsseg5wuv_mask_uint64x5xm1 (uint64x5xm1_t merge, const unsigned long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg5wuv_mask_uint64x5xm1 (merge, address, stride, mask, gvl);
}


uint8x5xm1_t test_vlsseg5wuv_mask_uint8x5xm1 (uint8x5xm1_t merge, const unsigned char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlsseg5wuv_mask_uint8x5xm1 (merge, address, stride, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg5wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg5wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg5wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg5wu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

