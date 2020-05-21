
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x8xm1_t test_vlseg8wuv_uint16x8xm1 (const unsigned short *address, unsigned int gvl) {
    return vlseg8wuv_uint16x8xm1 (address, gvl);
}


uint32x8xm1_t test_vlseg8wuv_uint32x8xm1 (const unsigned int *address, unsigned int gvl) {
    return vlseg8wuv_uint32x8xm1 (address, gvl);
}


uint64x8xm1_t test_vlseg8wuv_uint64x8xm1 (const unsigned long *address, unsigned int gvl) {
    return vlseg8wuv_uint64x8xm1 (address, gvl);
}


uint8x8xm1_t test_vlseg8wuv_uint8x8xm1 (const unsigned char *address, unsigned int gvl) {
    return vlseg8wuv_uint8x8xm1 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg8wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg8wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg8wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg8wu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

