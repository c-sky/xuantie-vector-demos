
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x3xm1_t test_vlxseg3huv_mask_uint16x3xm1_uint16xm1 (uint16x3xm1_t merge, const unsigned short *address, uint16xm1_t index, e16xm1_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint16x3xm1_uint16xm1 (merge, address, index, mask, gvl);
}


uint16x3xm2_t test_vlxseg3huv_mask_uint16x3xm2_uint16xm2 (uint16x3xm2_t merge, const unsigned short *address, uint16xm2_t index, e16xm2_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint16x3xm2_uint16xm2 (merge, address, index, mask, gvl);
}


uint32x3xm1_t test_vlxseg3huv_mask_uint32x3xm1_uint32xm1 (uint32x3xm1_t merge, const unsigned int *address, uint32xm1_t index, e32xm1_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint32x3xm1_uint32xm1 (merge, address, index, mask, gvl);
}


uint32x3xm2_t test_vlxseg3huv_mask_uint32x3xm2_uint32xm2 (uint32x3xm2_t merge, const unsigned int *address, uint32xm2_t index, e32xm2_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint32x3xm2_uint32xm2 (merge, address, index, mask, gvl);
}


uint64x3xm1_t test_vlxseg3huv_mask_uint64x3xm1_uint64xm1 (uint64x3xm1_t merge, const unsigned long *address, uint64xm1_t index, e64xm1_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint64x3xm1_uint64xm1 (merge, address, index, mask, gvl);
}


uint64x3xm2_t test_vlxseg3huv_mask_uint64x3xm2_uint64xm2 (uint64x3xm2_t merge, const unsigned long *address, uint64xm2_t index, e64xm2_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint64x3xm2_uint64xm2 (merge, address, index, mask, gvl);
}


uint8x3xm1_t test_vlxseg3huv_mask_uint8x3xm1_uint8xm1 (uint8x3xm1_t merge, const unsigned char *address, uint8xm1_t index, e8xm1_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint8x3xm1_uint8xm1 (merge, address, index, mask, gvl);
}


uint8x3xm2_t test_vlxseg3huv_mask_uint8x3xm2_uint8xm2 (uint8x3xm2_t merge, const unsigned char *address, uint8xm2_t index, e8xm2_t mask, unsigned int gvl) {
    return vlxseg3huv_mask_uint8x3xm2_uint8xm2 (merge, address, index, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg3hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxseg3hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg3hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlxseg3hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg3hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlxseg3hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg3hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlxseg3hu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

