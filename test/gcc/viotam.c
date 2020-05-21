
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_viotam_uint16xm1_e16xm1 (e16xm1_t a, unsigned int gvl) {
    return viotam_uint16xm1_e16xm1 (a, gvl);
}


uint16xm2_t test_viotam_uint16xm2_e16xm2 (e16xm2_t a, unsigned int gvl) {
    return viotam_uint16xm2_e16xm2 (a, gvl);
}


uint16xm4_t test_viotam_uint16xm4_e16xm4 (e16xm4_t a, unsigned int gvl) {
    return viotam_uint16xm4_e16xm4 (a, gvl);
}


uint16xm8_t test_viotam_uint16xm8_e16xm8 (e16xm8_t a, unsigned int gvl) {
    return viotam_uint16xm8_e16xm8 (a, gvl);
}


uint32xm1_t test_viotam_uint32xm1_e32xm1 (e32xm1_t a, unsigned int gvl) {
    return viotam_uint32xm1_e32xm1 (a, gvl);
}


uint32xm2_t test_viotam_uint32xm2_e32xm2 (e32xm2_t a, unsigned int gvl) {
    return viotam_uint32xm2_e32xm2 (a, gvl);
}


uint32xm4_t test_viotam_uint32xm4_e32xm4 (e32xm4_t a, unsigned int gvl) {
    return viotam_uint32xm4_e32xm4 (a, gvl);
}


uint32xm8_t test_viotam_uint32xm8_e32xm8 (e32xm8_t a, unsigned int gvl) {
    return viotam_uint32xm8_e32xm8 (a, gvl);
}


uint64xm1_t test_viotam_uint64xm1_e64xm1 (e64xm1_t a, unsigned int gvl) {
    return viotam_uint64xm1_e64xm1 (a, gvl);
}


uint64xm2_t test_viotam_uint64xm2_e64xm2 (e64xm2_t a, unsigned int gvl) {
    return viotam_uint64xm2_e64xm2 (a, gvl);
}


uint64xm4_t test_viotam_uint64xm4_e64xm4 (e64xm4_t a, unsigned int gvl) {
    return viotam_uint64xm4_e64xm4 (a, gvl);
}


uint64xm8_t test_viotam_uint64xm8_e64xm8 (e64xm8_t a, unsigned int gvl) {
    return viotam_uint64xm8_e64xm8 (a, gvl);
}


uint8xm1_t test_viotam_uint8xm1_e8xm1 (e8xm1_t a, unsigned int gvl) {
    return viotam_uint8xm1_e8xm1 (a, gvl);
}


uint8xm2_t test_viotam_uint8xm2_e8xm2 (e8xm2_t a, unsigned int gvl) {
    return viotam_uint8xm2_e8xm2 (a, gvl);
}


uint8xm4_t test_viotam_uint8xm4_e8xm4 (e8xm4_t a, unsigned int gvl) {
    return viotam_uint8xm4_e8xm4 (a, gvl);
}


uint8xm8_t test_viotam_uint8xm8_e8xm8 (e8xm8_t a, unsigned int gvl) {
    return viotam_uint8xm8_e8xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tviota\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tviota\.m" } }*/

/* { dg-final { cleanup-saved-temps } } */

