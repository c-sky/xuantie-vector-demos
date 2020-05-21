
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm2_t test_vwsmaccuvx_uint16xm2_uint8xm1 (unsigned char a, uint8xm1_t b, uint16xm2_t result, unsigned int gvl) {
    return vwsmaccuvx_uint16xm2_uint8xm1 (a, b, result, gvl);
}


uint16xm4_t test_vwsmaccuvx_uint16xm4_uint8xm2 (unsigned char a, uint8xm2_t b, uint16xm4_t result, unsigned int gvl) {
    return vwsmaccuvx_uint16xm4_uint8xm2 (a, b, result, gvl);
}


uint16xm8_t test_vwsmaccuvx_uint16xm8_uint8xm4 (unsigned char a, uint8xm4_t b, uint16xm8_t result, unsigned int gvl) {
    return vwsmaccuvx_uint16xm8_uint8xm4 (a, b, result, gvl);
}


uint32xm2_t test_vwsmaccuvx_uint32xm2_uint16xm1 (unsigned short a, uint16xm1_t b, uint32xm2_t result, unsigned int gvl) {
    return vwsmaccuvx_uint32xm2_uint16xm1 (a, b, result, gvl);
}


uint32xm4_t test_vwsmaccuvx_uint32xm4_uint16xm2 (unsigned short a, uint16xm2_t b, uint32xm4_t result, unsigned int gvl) {
    return vwsmaccuvx_uint32xm4_uint16xm2 (a, b, result, gvl);
}


uint32xm8_t test_vwsmaccuvx_uint32xm8_uint16xm4 (unsigned short a, uint16xm4_t b, uint32xm8_t result, unsigned int gvl) {
    return vwsmaccuvx_uint32xm8_uint16xm4 (a, b, result, gvl);
}


uint64xm2_t test_vwsmaccuvx_uint64xm2_uint32xm1 (unsigned int a, uint32xm1_t b, uint64xm2_t result, unsigned int gvl) {
    return vwsmaccuvx_uint64xm2_uint32xm1 (a, b, result, gvl);
}


uint64xm4_t test_vwsmaccuvx_uint64xm4_uint32xm2 (unsigned int a, uint32xm2_t b, uint64xm4_t result, unsigned int gvl) {
    return vwsmaccuvx_uint64xm4_uint32xm2 (a, b, result, gvl);
}


uint64xm8_t test_vwsmaccuvx_uint64xm8_uint32xm4 (unsigned int a, uint32xm4_t b, uint64xm8_t result, unsigned int gvl) {
    return vwsmaccuvx_uint64xm8_uint32xm4 (a, b, result, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvwsmaccu\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

