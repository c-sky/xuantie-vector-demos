
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x5xm1_t test_vlseg5buv_uint16x5xm1 (const unsigned short *address, unsigned int gvl) {
    return vlseg5buv_uint16x5xm1 (address, gvl);
}


uint32x5xm1_t test_vlseg5buv_uint32x5xm1 (const unsigned int *address, unsigned int gvl) {
    return vlseg5buv_uint32x5xm1 (address, gvl);
}


uint64x5xm1_t test_vlseg5buv_uint64x5xm1 (const unsigned long *address, unsigned int gvl) {
    return vlseg5buv_uint64x5xm1 (address, gvl);
}


uint8x5xm1_t test_vlseg5buv_uint8x5xm1 (const unsigned char *address, unsigned int gvl) {
    return vlseg5buv_uint8x5xm1 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg5bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg5bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg5bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg5bu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

