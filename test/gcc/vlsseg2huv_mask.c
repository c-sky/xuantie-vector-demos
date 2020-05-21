
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x2xm1_t test_vlsseg2huv_mask_uint16x2xm1 (uint16x2xm1_t merge, const unsigned short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint16x2xm1 (merge, address, stride, mask, gvl);
}


uint16x2xm2_t test_vlsseg2huv_mask_uint16x2xm2 (uint16x2xm2_t merge, const unsigned short *address, long stride, e16xm2_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint16x2xm2 (merge, address, stride, mask, gvl);
}


uint16x2xm4_t test_vlsseg2huv_mask_uint16x2xm4 (uint16x2xm4_t merge, const unsigned short *address, long stride, e16xm4_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint16x2xm4 (merge, address, stride, mask, gvl);
}


uint32x2xm1_t test_vlsseg2huv_mask_uint32x2xm1 (uint32x2xm1_t merge, const unsigned int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint32x2xm1 (merge, address, stride, mask, gvl);
}


uint32x2xm2_t test_vlsseg2huv_mask_uint32x2xm2 (uint32x2xm2_t merge, const unsigned int *address, long stride, e32xm2_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint32x2xm2 (merge, address, stride, mask, gvl);
}


uint32x2xm4_t test_vlsseg2huv_mask_uint32x2xm4 (uint32x2xm4_t merge, const unsigned int *address, long stride, e32xm4_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint32x2xm4 (merge, address, stride, mask, gvl);
}


uint64x2xm1_t test_vlsseg2huv_mask_uint64x2xm1 (uint64x2xm1_t merge, const unsigned long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint64x2xm1 (merge, address, stride, mask, gvl);
}


uint64x2xm2_t test_vlsseg2huv_mask_uint64x2xm2 (uint64x2xm2_t merge, const unsigned long *address, long stride, e64xm2_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint64x2xm2 (merge, address, stride, mask, gvl);
}


uint64x2xm4_t test_vlsseg2huv_mask_uint64x2xm4 (uint64x2xm4_t merge, const unsigned long *address, long stride, e64xm4_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint64x2xm4 (merge, address, stride, mask, gvl);
}


uint8x2xm1_t test_vlsseg2huv_mask_uint8x2xm1 (uint8x2xm1_t merge, const unsigned char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint8x2xm1 (merge, address, stride, mask, gvl);
}


uint8x2xm2_t test_vlsseg2huv_mask_uint8x2xm2 (uint8x2xm2_t merge, const unsigned char *address, long stride, e8xm2_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint8x2xm2 (merge, address, stride, mask, gvl);
}


uint8x2xm4_t test_vlsseg2huv_mask_uint8x2xm4 (uint8x2xm4_t merge, const unsigned char *address, long stride, e8xm4_t mask, unsigned int gvl) {
    return vlsseg2huv_mask_uint8x2xm4 (merge, address, stride, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlsseg2hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvlsseg2hu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

