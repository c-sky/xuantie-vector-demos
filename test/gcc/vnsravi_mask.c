
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vnsravi_mask_int16xm1_int32xm2 (int16xm1_t merge, int32xm2_t a, const unsigned short b, e32xm2_t mask, unsigned int gvl) {
    return vnsravi_mask_int16xm1_int32xm2 (merge,  a,  1,  mask,  gvl);
}


int16xm2_t test_vnsravi_mask_int16xm2_int32xm4 (int16xm2_t merge, int32xm4_t a, const unsigned short b, e32xm4_t mask, unsigned int gvl) {
    return vnsravi_mask_int16xm2_int32xm4 (merge,  a,  1,  mask,  gvl);
}


int16xm4_t test_vnsravi_mask_int16xm4_int32xm8 (int16xm4_t merge, int32xm8_t a, const unsigned short b, e32xm8_t mask, unsigned int gvl) {
    return vnsravi_mask_int16xm4_int32xm8 (merge,  a,  1,  mask,  gvl);
}


int32xm1_t test_vnsravi_mask_int32xm1_int64xm2 (int32xm1_t merge, int64xm2_t a, const unsigned int b, e64xm2_t mask, unsigned int gvl) {
    return vnsravi_mask_int32xm1_int64xm2 (merge,  a,  1,  mask,  gvl);
}


int32xm2_t test_vnsravi_mask_int32xm2_int64xm4 (int32xm2_t merge, int64xm4_t a, const unsigned int b, e64xm4_t mask, unsigned int gvl) {
    return vnsravi_mask_int32xm2_int64xm4 (merge,  a,  1,  mask,  gvl);
}


int32xm4_t test_vnsravi_mask_int32xm4_int64xm8 (int32xm4_t merge, int64xm8_t a, const unsigned int b, e64xm8_t mask, unsigned int gvl) {
    return vnsravi_mask_int32xm4_int64xm8 (merge,  a,  1,  mask,  gvl);
}


int8xm1_t test_vnsravi_mask_int8xm1_int16xm2 (int8xm1_t merge, int16xm2_t a, const unsigned char b, e16xm2_t mask, unsigned int gvl) {
    return vnsravi_mask_int8xm1_int16xm2 (merge,  a,  1,  mask,  gvl);
}


int8xm2_t test_vnsravi_mask_int8xm2_int16xm4 (int8xm2_t merge, int16xm4_t a, const unsigned char b, e16xm4_t mask, unsigned int gvl) {
    return vnsravi_mask_int8xm2_int16xm4 (merge,  a,  1,  mask,  gvl);
}


int8xm4_t test_vnsravi_mask_int8xm4_int16xm8 (int8xm4_t merge, int16xm8_t a, const unsigned char b, e16xm8_t mask, unsigned int gvl) {
    return vnsravi_mask_int8xm4_int16xm8 (merge,  a,  1,  mask,  gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvnsra\.vi" } }*/

/* { dg-final { cleanup-saved-temps } } */

