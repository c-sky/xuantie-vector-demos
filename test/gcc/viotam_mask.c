
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_viotam_mask_uint16xm1_e16xm1 (uint16xm1_t merge, e16xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return viotam_mask_uint16xm1_e16xm1 (merge, a, mask, gvl);
}


uint16xm2_t test_viotam_mask_uint16xm2_e16xm2 (uint16xm2_t merge, e16xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return viotam_mask_uint16xm2_e16xm2 (merge, a, mask, gvl);
}


uint16xm4_t test_viotam_mask_uint16xm4_e16xm4 (uint16xm4_t merge, e16xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return viotam_mask_uint16xm4_e16xm4 (merge, a, mask, gvl);
}


uint16xm8_t test_viotam_mask_uint16xm8_e16xm8 (uint16xm8_t merge, e16xm8_t a, e16xm8_t mask, unsigned int gvl) {
    return viotam_mask_uint16xm8_e16xm8 (merge, a, mask, gvl);
}


uint32xm1_t test_viotam_mask_uint32xm1_e32xm1 (uint32xm1_t merge, e32xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return viotam_mask_uint32xm1_e32xm1 (merge, a, mask, gvl);
}


uint32xm2_t test_viotam_mask_uint32xm2_e32xm2 (uint32xm2_t merge, e32xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return viotam_mask_uint32xm2_e32xm2 (merge, a, mask, gvl);
}


uint32xm4_t test_viotam_mask_uint32xm4_e32xm4 (uint32xm4_t merge, e32xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return viotam_mask_uint32xm4_e32xm4 (merge, a, mask, gvl);
}


uint32xm8_t test_viotam_mask_uint32xm8_e32xm8 (uint32xm8_t merge, e32xm8_t a, e32xm8_t mask, unsigned int gvl) {
    return viotam_mask_uint32xm8_e32xm8 (merge, a, mask, gvl);
}


uint64xm1_t test_viotam_mask_uint64xm1_e64xm1 (uint64xm1_t merge, e64xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return viotam_mask_uint64xm1_e64xm1 (merge, a, mask, gvl);
}


uint64xm2_t test_viotam_mask_uint64xm2_e64xm2 (uint64xm2_t merge, e64xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return viotam_mask_uint64xm2_e64xm2 (merge, a, mask, gvl);
}


uint64xm4_t test_viotam_mask_uint64xm4_e64xm4 (uint64xm4_t merge, e64xm4_t a, e64xm4_t mask, unsigned int gvl) {
    return viotam_mask_uint64xm4_e64xm4 (merge, a, mask, gvl);
}


uint64xm8_t test_viotam_mask_uint64xm8_e64xm8 (uint64xm8_t merge, e64xm8_t a, e64xm8_t mask, unsigned int gvl) {
    return viotam_mask_uint64xm8_e64xm8 (merge, a, mask, gvl);
}


uint8xm1_t test_viotam_mask_uint8xm1_e8xm1 (uint8xm1_t merge, e8xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return viotam_mask_uint8xm1_e8xm1 (merge, a, mask, gvl);
}


uint8xm2_t test_viotam_mask_uint8xm2_e8xm2 (uint8xm2_t merge, e8xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return viotam_mask_uint8xm2_e8xm2 (merge, a, mask, gvl);
}


uint8xm4_t test_viotam_mask_uint8xm4_e8xm4 (uint8xm4_t merge, e8xm4_t a, e8xm4_t mask, unsigned int gvl) {
    return viotam_mask_uint8xm4_e8xm4 (merge, a, mask, gvl);
}


uint8xm8_t test_viotam_mask_uint8xm8_e8xm8 (uint8xm8_t merge, e8xm8_t a, e8xm8_t mask, unsigned int gvl) {
    return viotam_mask_uint8xm8_e8xm8 (merge, a, mask, gvl);
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

