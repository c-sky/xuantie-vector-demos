
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vnmsacvv_mask_int16xm1 (int16xm1_t merge, int16xm1_t a, int16xm1_t b, int16xm1_t result, e16xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int16xm1 (merge, a, b, result, mask, gvl);
}


int16xm2_t test_vnmsacvv_mask_int16xm2 (int16xm2_t merge, int16xm2_t a, int16xm2_t b, int16xm2_t result, e16xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int16xm2 (merge, a, b, result, mask, gvl);
}


int16xm4_t test_vnmsacvv_mask_int16xm4 (int16xm4_t merge, int16xm4_t a, int16xm4_t b, int16xm4_t result, e16xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int16xm4 (merge, a, b, result, mask, gvl);
}


int32xm1_t test_vnmsacvv_mask_int32xm1 (int32xm1_t merge, int32xm1_t a, int32xm1_t b, int32xm1_t result, e32xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int32xm1 (merge, a, b, result, mask, gvl);
}


int32xm2_t test_vnmsacvv_mask_int32xm2 (int32xm2_t merge, int32xm2_t a, int32xm2_t b, int32xm2_t result, e32xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int32xm2 (merge, a, b, result, mask, gvl);
}


int32xm4_t test_vnmsacvv_mask_int32xm4 (int32xm4_t merge, int32xm4_t a, int32xm4_t b, int32xm4_t result, e32xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int32xm4 (merge, a, b, result, mask, gvl);
}


int64xm1_t test_vnmsacvv_mask_int64xm1 (int64xm1_t merge, int64xm1_t a, int64xm1_t b, int64xm1_t result, e64xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int64xm1 (merge, a, b, result, mask, gvl);
}


int64xm2_t test_vnmsacvv_mask_int64xm2 (int64xm2_t merge, int64xm2_t a, int64xm2_t b, int64xm2_t result, e64xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int64xm2 (merge, a, b, result, mask, gvl);
}


int64xm4_t test_vnmsacvv_mask_int64xm4 (int64xm4_t merge, int64xm4_t a, int64xm4_t b, int64xm4_t result, e64xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int64xm4 (merge, a, b, result, mask, gvl);
}


int8xm1_t test_vnmsacvv_mask_int8xm1 (int8xm1_t merge, int8xm1_t a, int8xm1_t b, int8xm1_t result, e8xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int8xm1 (merge, a, b, result, mask, gvl);
}


int8xm2_t test_vnmsacvv_mask_int8xm2 (int8xm2_t merge, int8xm2_t a, int8xm2_t b, int8xm2_t result, e8xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int8xm2 (merge, a, b, result, mask, gvl);
}


int8xm4_t test_vnmsacvv_mask_int8xm4 (int8xm4_t merge, int8xm4_t a, int8xm4_t b, int8xm4_t result, e8xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_int8xm4 (merge, a, b, result, mask, gvl);
}


uint16xm1_t test_vnmsacvv_mask_uint16xm1 (uint16xm1_t merge, uint16xm1_t a, uint16xm1_t b, uint16xm1_t result, e16xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint16xm1 (merge, a, b, result, mask, gvl);
}


uint16xm2_t test_vnmsacvv_mask_uint16xm2 (uint16xm2_t merge, uint16xm2_t a, uint16xm2_t b, uint16xm2_t result, e16xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint16xm2 (merge, a, b, result, mask, gvl);
}


uint16xm4_t test_vnmsacvv_mask_uint16xm4 (uint16xm4_t merge, uint16xm4_t a, uint16xm4_t b, uint16xm4_t result, e16xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint16xm4 (merge, a, b, result, mask, gvl);
}


uint32xm1_t test_vnmsacvv_mask_uint32xm1 (uint32xm1_t merge, uint32xm1_t a, uint32xm1_t b, uint32xm1_t result, e32xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint32xm1 (merge, a, b, result, mask, gvl);
}


uint32xm2_t test_vnmsacvv_mask_uint32xm2 (uint32xm2_t merge, uint32xm2_t a, uint32xm2_t b, uint32xm2_t result, e32xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint32xm2 (merge, a, b, result, mask, gvl);
}


uint32xm4_t test_vnmsacvv_mask_uint32xm4 (uint32xm4_t merge, uint32xm4_t a, uint32xm4_t b, uint32xm4_t result, e32xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint32xm4 (merge, a, b, result, mask, gvl);
}


uint64xm1_t test_vnmsacvv_mask_uint64xm1 (uint64xm1_t merge, uint64xm1_t a, uint64xm1_t b, uint64xm1_t result, e64xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint64xm1 (merge, a, b, result, mask, gvl);
}


uint64xm2_t test_vnmsacvv_mask_uint64xm2 (uint64xm2_t merge, uint64xm2_t a, uint64xm2_t b, uint64xm2_t result, e64xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint64xm2 (merge, a, b, result, mask, gvl);
}


uint64xm4_t test_vnmsacvv_mask_uint64xm4 (uint64xm4_t merge, uint64xm4_t a, uint64xm4_t b, uint64xm4_t result, e64xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint64xm4 (merge, a, b, result, mask, gvl);
}


uint8xm1_t test_vnmsacvv_mask_uint8xm1 (uint8xm1_t merge, uint8xm1_t a, uint8xm1_t b, uint8xm1_t result, e8xm1_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint8xm1 (merge, a, b, result, mask, gvl);
}


uint8xm2_t test_vnmsacvv_mask_uint8xm2 (uint8xm2_t merge, uint8xm2_t a, uint8xm2_t b, uint8xm2_t result, e8xm2_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint8xm2 (merge, a, b, result, mask, gvl);
}


uint8xm4_t test_vnmsacvv_mask_uint8xm4 (uint8xm4_t merge, uint8xm4_t a, uint8xm4_t b, uint8xm4_t result, e8xm4_t mask, unsigned int gvl) {
    return vnmsacvv_mask_uint8xm4 (merge, a, b, result, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvnmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvnmsac\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

