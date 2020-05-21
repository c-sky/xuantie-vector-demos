
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm2_t test_vwadduwx_uint16xm2 (uint16xm2_t a, unsigned char b, unsigned int gvl) {
    return vwadduwx_uint16xm2 (a, b, gvl);
}


uint16xm4_t test_vwadduwx_uint16xm4 (uint16xm4_t a, unsigned char b, unsigned int gvl) {
    return vwadduwx_uint16xm4 (a, b, gvl);
}


uint16xm8_t test_vwadduwx_uint16xm8 (uint16xm8_t a, unsigned char b, unsigned int gvl) {
    return vwadduwx_uint16xm8 (a, b, gvl);
}


uint32xm2_t test_vwadduwx_uint32xm2 (uint32xm2_t a, unsigned short b, unsigned int gvl) {
    return vwadduwx_uint32xm2 (a, b, gvl);
}


uint32xm4_t test_vwadduwx_uint32xm4 (uint32xm4_t a, unsigned short b, unsigned int gvl) {
    return vwadduwx_uint32xm4 (a, b, gvl);
}


uint32xm8_t test_vwadduwx_uint32xm8 (uint32xm8_t a, unsigned short b, unsigned int gvl) {
    return vwadduwx_uint32xm8 (a, b, gvl);
}


uint64xm2_t test_vwadduwx_uint64xm2 (uint64xm2_t a, unsigned int b, unsigned int gvl) {
    return vwadduwx_uint64xm2 (a, b, gvl);
}


uint64xm4_t test_vwadduwx_uint64xm4 (uint64xm4_t a, unsigned int b, unsigned int gvl) {
    return vwadduwx_uint64xm4 (a, b, gvl);
}


uint64xm8_t test_vwadduwx_uint64xm8 (uint64xm8_t a, unsigned int b, unsigned int gvl) {
    return vwadduwx_uint64xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvwaddu\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvwaddu\.wx" } }*/

/* { dg-final { cleanup-saved-temps } } */

