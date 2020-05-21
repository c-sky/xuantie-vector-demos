
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vminvx_mask_int16xm1 (int16xm1_t merge, int16xm1_t a, short b, e16xm1_t mask, unsigned int gvl) {
    return vminvx_mask_int16xm1 (merge, a, b, mask, gvl);
}


int16xm2_t test_vminvx_mask_int16xm2 (int16xm2_t merge, int16xm2_t a, short b, e16xm2_t mask, unsigned int gvl) {
    return vminvx_mask_int16xm2 (merge, a, b, mask, gvl);
}


int16xm4_t test_vminvx_mask_int16xm4 (int16xm4_t merge, int16xm4_t a, short b, e16xm4_t mask, unsigned int gvl) {
    return vminvx_mask_int16xm4 (merge, a, b, mask, gvl);
}


int16xm8_t test_vminvx_mask_int16xm8 (int16xm8_t merge, int16xm8_t a, short b, e16xm8_t mask, unsigned int gvl) {
    return vminvx_mask_int16xm8 (merge, a, b, mask, gvl);
}


int32xm1_t test_vminvx_mask_int32xm1 (int32xm1_t merge, int32xm1_t a, int b, e32xm1_t mask, unsigned int gvl) {
    return vminvx_mask_int32xm1 (merge, a, b, mask, gvl);
}


int32xm2_t test_vminvx_mask_int32xm2 (int32xm2_t merge, int32xm2_t a, int b, e32xm2_t mask, unsigned int gvl) {
    return vminvx_mask_int32xm2 (merge, a, b, mask, gvl);
}


int32xm4_t test_vminvx_mask_int32xm4 (int32xm4_t merge, int32xm4_t a, int b, e32xm4_t mask, unsigned int gvl) {
    return vminvx_mask_int32xm4 (merge, a, b, mask, gvl);
}


int32xm8_t test_vminvx_mask_int32xm8 (int32xm8_t merge, int32xm8_t a, int b, e32xm8_t mask, unsigned int gvl) {
    return vminvx_mask_int32xm8 (merge, a, b, mask, gvl);
}


int64xm1_t test_vminvx_mask_int64xm1 (int64xm1_t merge, int64xm1_t a, long b, e64xm1_t mask, unsigned int gvl) {
    return vminvx_mask_int64xm1 (merge, a, b, mask, gvl);
}


int64xm2_t test_vminvx_mask_int64xm2 (int64xm2_t merge, int64xm2_t a, long b, e64xm2_t mask, unsigned int gvl) {
    return vminvx_mask_int64xm2 (merge, a, b, mask, gvl);
}


int64xm4_t test_vminvx_mask_int64xm4 (int64xm4_t merge, int64xm4_t a, long b, e64xm4_t mask, unsigned int gvl) {
    return vminvx_mask_int64xm4 (merge, a, b, mask, gvl);
}


int64xm8_t test_vminvx_mask_int64xm8 (int64xm8_t merge, int64xm8_t a, long b, e64xm8_t mask, unsigned int gvl) {
    return vminvx_mask_int64xm8 (merge, a, b, mask, gvl);
}


int8xm1_t test_vminvx_mask_int8xm1 (int8xm1_t merge, int8xm1_t a, signed char b, e8xm1_t mask, unsigned int gvl) {
    return vminvx_mask_int8xm1 (merge, a, b, mask, gvl);
}


int8xm2_t test_vminvx_mask_int8xm2 (int8xm2_t merge, int8xm2_t a, signed char b, e8xm2_t mask, unsigned int gvl) {
    return vminvx_mask_int8xm2 (merge, a, b, mask, gvl);
}


int8xm4_t test_vminvx_mask_int8xm4 (int8xm4_t merge, int8xm4_t a, signed char b, e8xm4_t mask, unsigned int gvl) {
    return vminvx_mask_int8xm4 (merge, a, b, mask, gvl);
}


int8xm8_t test_vminvx_mask_int8xm8 (int8xm8_t merge, int8xm8_t a, signed char b, e8xm8_t mask, unsigned int gvl) {
    return vminvx_mask_int8xm8 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmin\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmin\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

