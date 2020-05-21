
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_vlshuv_mask_uint16xm1 (uint16xm1_t merge, const unsigned short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlshuv_mask_uint16xm1 (merge, address, stride, mask, gvl);
}


uint16xm2_t test_vlshuv_mask_uint16xm2 (uint16xm2_t merge, const unsigned short *address, long stride, e16xm2_t mask, unsigned int gvl) {
    return vlshuv_mask_uint16xm2 (merge, address, stride, mask, gvl);
}


uint16xm4_t test_vlshuv_mask_uint16xm4 (uint16xm4_t merge, const unsigned short *address, long stride, e16xm4_t mask, unsigned int gvl) {
    return vlshuv_mask_uint16xm4 (merge, address, stride, mask, gvl);
}


uint16xm8_t test_vlshuv_mask_uint16xm8 (uint16xm8_t merge, const unsigned short *address, long stride, e16xm8_t mask, unsigned int gvl) {
    return vlshuv_mask_uint16xm8 (merge, address, stride, mask, gvl);
}


uint32xm1_t test_vlshuv_mask_uint32xm1 (uint32xm1_t merge, const unsigned int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlshuv_mask_uint32xm1 (merge, address, stride, mask, gvl);
}


uint32xm2_t test_vlshuv_mask_uint32xm2 (uint32xm2_t merge, const unsigned int *address, long stride, e32xm2_t mask, unsigned int gvl) {
    return vlshuv_mask_uint32xm2 (merge, address, stride, mask, gvl);
}


uint32xm4_t test_vlshuv_mask_uint32xm4 (uint32xm4_t merge, const unsigned int *address, long stride, e32xm4_t mask, unsigned int gvl) {
    return vlshuv_mask_uint32xm4 (merge, address, stride, mask, gvl);
}


uint32xm8_t test_vlshuv_mask_uint32xm8 (uint32xm8_t merge, const unsigned int *address, long stride, e32xm8_t mask, unsigned int gvl) {
    return vlshuv_mask_uint32xm8 (merge, address, stride, mask, gvl);
}


uint64xm1_t test_vlshuv_mask_uint64xm1 (uint64xm1_t merge, const unsigned long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlshuv_mask_uint64xm1 (merge, address, stride, mask, gvl);
}


uint64xm2_t test_vlshuv_mask_uint64xm2 (uint64xm2_t merge, const unsigned long *address, long stride, e64xm2_t mask, unsigned int gvl) {
    return vlshuv_mask_uint64xm2 (merge, address, stride, mask, gvl);
}


uint64xm4_t test_vlshuv_mask_uint64xm4 (uint64xm4_t merge, const unsigned long *address, long stride, e64xm4_t mask, unsigned int gvl) {
    return vlshuv_mask_uint64xm4 (merge, address, stride, mask, gvl);
}


uint64xm8_t test_vlshuv_mask_uint64xm8 (uint64xm8_t merge, const unsigned long *address, long stride, e64xm8_t mask, unsigned int gvl) {
    return vlshuv_mask_uint64xm8 (merge, address, stride, mask, gvl);
}


uint8xm1_t test_vlshuv_mask_uint8xm1 (uint8xm1_t merge, const unsigned char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlshuv_mask_uint8xm1 (merge, address, stride, mask, gvl);
}


uint8xm2_t test_vlshuv_mask_uint8xm2 (uint8xm2_t merge, const unsigned char *address, long stride, e8xm2_t mask, unsigned int gvl) {
    return vlshuv_mask_uint8xm2 (merge, address, stride, mask, gvl);
}


uint8xm4_t test_vlshuv_mask_uint8xm4 (uint8xm4_t merge, const unsigned char *address, long stride, e8xm4_t mask, unsigned int gvl) {
    return vlshuv_mask_uint8xm4 (merge, address, stride, mask, gvl);
}


uint8xm8_t test_vlshuv_mask_uint8xm8 (uint8xm8_t merge, const unsigned char *address, long stride, e8xm8_t mask, unsigned int gvl) {
    return vlshuv_mask_uint8xm8 (merge, address, stride, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvlshu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvlshu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

