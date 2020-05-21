
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_vredminuvs_uint16xm1 (uint16xm1_t a, uint16xm1_t b, unsigned int gvl) {
    return vredminuvs_uint16xm1 (a, b, gvl);
}


uint16xm2_t test_vredminuvs_uint16xm2 (uint16xm2_t a, uint16xm2_t b, unsigned int gvl) {
    return vredminuvs_uint16xm2 (a, b, gvl);
}


uint16xm4_t test_vredminuvs_uint16xm4 (uint16xm4_t a, uint16xm4_t b, unsigned int gvl) {
    return vredminuvs_uint16xm4 (a, b, gvl);
}


uint16xm8_t test_vredminuvs_uint16xm8 (uint16xm8_t a, uint16xm8_t b, unsigned int gvl) {
    return vredminuvs_uint16xm8 (a, b, gvl);
}


uint32xm1_t test_vredminuvs_uint32xm1 (uint32xm1_t a, uint32xm1_t b, unsigned int gvl) {
    return vredminuvs_uint32xm1 (a, b, gvl);
}


uint32xm2_t test_vredminuvs_uint32xm2 (uint32xm2_t a, uint32xm2_t b, unsigned int gvl) {
    return vredminuvs_uint32xm2 (a, b, gvl);
}


uint32xm4_t test_vredminuvs_uint32xm4 (uint32xm4_t a, uint32xm4_t b, unsigned int gvl) {
    return vredminuvs_uint32xm4 (a, b, gvl);
}


uint32xm8_t test_vredminuvs_uint32xm8 (uint32xm8_t a, uint32xm8_t b, unsigned int gvl) {
    return vredminuvs_uint32xm8 (a, b, gvl);
}


uint64xm1_t test_vredminuvs_uint64xm1 (uint64xm1_t a, uint64xm1_t b, unsigned int gvl) {
    return vredminuvs_uint64xm1 (a, b, gvl);
}


uint64xm2_t test_vredminuvs_uint64xm2 (uint64xm2_t a, uint64xm2_t b, unsigned int gvl) {
    return vredminuvs_uint64xm2 (a, b, gvl);
}


uint64xm4_t test_vredminuvs_uint64xm4 (uint64xm4_t a, uint64xm4_t b, unsigned int gvl) {
    return vredminuvs_uint64xm4 (a, b, gvl);
}


uint64xm8_t test_vredminuvs_uint64xm8 (uint64xm8_t a, uint64xm8_t b, unsigned int gvl) {
    return vredminuvs_uint64xm8 (a, b, gvl);
}


uint8xm1_t test_vredminuvs_uint8xm1 (uint8xm1_t a, uint8xm1_t b, unsigned int gvl) {
    return vredminuvs_uint8xm1 (a, b, gvl);
}


uint8xm2_t test_vredminuvs_uint8xm2 (uint8xm2_t a, uint8xm2_t b, unsigned int gvl) {
    return vredminuvs_uint8xm2 (a, b, gvl);
}


uint8xm4_t test_vredminuvs_uint8xm4 (uint8xm4_t a, uint8xm4_t b, unsigned int gvl) {
    return vredminuvs_uint8xm4 (a, b, gvl);
}


uint8xm8_t test_vredminuvs_uint8xm8 (uint8xm8_t a, uint8xm8_t b, unsigned int gvl) {
    return vredminuvs_uint8xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvredminu\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvredminu\.vs" } }*/

/* { dg-final { cleanup-saved-temps } } */

