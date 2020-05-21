
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x7xm1_t test_vlxseg7huv_uint16x7xm1_uint16xm1 (const unsigned short *address, uint16xm1_t index, unsigned int gvl) {
    return vlxseg7huv_uint16x7xm1_uint16xm1 (address, index, gvl);
}


uint32x7xm1_t test_vlxseg7huv_uint32x7xm1_uint32xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxseg7huv_uint32x7xm1_uint32xm1 (address, index, gvl);
}


uint64x7xm1_t test_vlxseg7huv_uint64x7xm1_uint64xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxseg7huv_uint64x7xm1_uint64xm1 (address, index, gvl);
}


uint8x7xm1_t test_vlxseg7huv_uint8x7xm1_uint8xm1 (const unsigned char *address, uint8xm1_t index, unsigned int gvl) {
    return vlxseg7huv_uint8x7xm1_uint8xm1 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg7hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg7hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg7hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg7hu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

