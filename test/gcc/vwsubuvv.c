
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm2_t test_vwsubuvv_uint16xm2_uint8xm1 (uint8xm1_t a, uint8xm1_t b, unsigned int gvl) {
    return vwsubuvv_uint16xm2_uint8xm1 (a, b, gvl);
}


uint16xm4_t test_vwsubuvv_uint16xm4_uint8xm2 (uint8xm2_t a, uint8xm2_t b, unsigned int gvl) {
    return vwsubuvv_uint16xm4_uint8xm2 (a, b, gvl);
}


uint16xm8_t test_vwsubuvv_uint16xm8_uint8xm4 (uint8xm4_t a, uint8xm4_t b, unsigned int gvl) {
    return vwsubuvv_uint16xm8_uint8xm4 (a, b, gvl);
}


uint32xm2_t test_vwsubuvv_uint32xm2_uint16xm1 (uint16xm1_t a, uint16xm1_t b, unsigned int gvl) {
    return vwsubuvv_uint32xm2_uint16xm1 (a, b, gvl);
}


uint32xm4_t test_vwsubuvv_uint32xm4_uint16xm2 (uint16xm2_t a, uint16xm2_t b, unsigned int gvl) {
    return vwsubuvv_uint32xm4_uint16xm2 (a, b, gvl);
}


uint32xm8_t test_vwsubuvv_uint32xm8_uint16xm4 (uint16xm4_t a, uint16xm4_t b, unsigned int gvl) {
    return vwsubuvv_uint32xm8_uint16xm4 (a, b, gvl);
}


uint64xm2_t test_vwsubuvv_uint64xm2_uint32xm1 (uint32xm1_t a, uint32xm1_t b, unsigned int gvl) {
    return vwsubuvv_uint64xm2_uint32xm1 (a, b, gvl);
}


uint64xm4_t test_vwsubuvv_uint64xm4_uint32xm2 (uint32xm2_t a, uint32xm2_t b, unsigned int gvl) {
    return vwsubuvv_uint64xm4_uint32xm2 (a, b, gvl);
}


uint64xm8_t test_vwsubuvv_uint64xm8_uint32xm4 (uint32xm4_t a, uint32xm4_t b, unsigned int gvl) {
    return vwsubuvv_uint64xm8_uint32xm4 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvwsubu\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvwsubu\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

