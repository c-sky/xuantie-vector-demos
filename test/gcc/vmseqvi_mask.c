
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmseqvi_mask_e16xm1_int16xm1 (e16xm1_t merge, int16xm1_t a, const short b, e16xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm1_int16xm1 (merge,  a,  1,  mask,  gvl);
}


e16xm1_t test_vmseqvi_mask_e16xm1_uint16xm1 (e16xm1_t merge, uint16xm1_t a, const unsigned short b, e16xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm1_uint16xm1 (merge,  a,  1,  mask,  gvl);
}


e16xm2_t test_vmseqvi_mask_e16xm2_int16xm2 (e16xm2_t merge, int16xm2_t a, const short b, e16xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm2_int16xm2 (merge,  a,  1,  mask,  gvl);
}


e16xm2_t test_vmseqvi_mask_e16xm2_uint16xm2 (e16xm2_t merge, uint16xm2_t a, const unsigned short b, e16xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm2_uint16xm2 (merge,  a,  1,  mask,  gvl);
}


e16xm4_t test_vmseqvi_mask_e16xm4_int16xm4 (e16xm4_t merge, int16xm4_t a, const short b, e16xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm4_int16xm4 (merge,  a,  1,  mask,  gvl);
}


e16xm4_t test_vmseqvi_mask_e16xm4_uint16xm4 (e16xm4_t merge, uint16xm4_t a, const unsigned short b, e16xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm4_uint16xm4 (merge,  a,  1,  mask,  gvl);
}


e16xm8_t test_vmseqvi_mask_e16xm8_int16xm8 (e16xm8_t merge, int16xm8_t a, const short b, e16xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm8_int16xm8 (merge,  a,  1,  mask,  gvl);
}


e16xm8_t test_vmseqvi_mask_e16xm8_uint16xm8 (e16xm8_t merge, uint16xm8_t a, const unsigned short b, e16xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e16xm8_uint16xm8 (merge,  a,  1,  mask,  gvl);
}


e32xm1_t test_vmseqvi_mask_e32xm1_int32xm1 (e32xm1_t merge, int32xm1_t a, const int b, e32xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm1_int32xm1 (merge,  a,  1,  mask,  gvl);
}


e32xm1_t test_vmseqvi_mask_e32xm1_uint32xm1 (e32xm1_t merge, uint32xm1_t a, const unsigned int b, e32xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm1_uint32xm1 (merge,  a,  1,  mask,  gvl);
}


e32xm2_t test_vmseqvi_mask_e32xm2_int32xm2 (e32xm2_t merge, int32xm2_t a, const int b, e32xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm2_int32xm2 (merge,  a,  1,  mask,  gvl);
}


e32xm2_t test_vmseqvi_mask_e32xm2_uint32xm2 (e32xm2_t merge, uint32xm2_t a, const unsigned int b, e32xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm2_uint32xm2 (merge,  a,  1,  mask,  gvl);
}


e32xm4_t test_vmseqvi_mask_e32xm4_int32xm4 (e32xm4_t merge, int32xm4_t a, const int b, e32xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm4_int32xm4 (merge,  a,  1,  mask,  gvl);
}


e32xm4_t test_vmseqvi_mask_e32xm4_uint32xm4 (e32xm4_t merge, uint32xm4_t a, const unsigned int b, e32xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm4_uint32xm4 (merge,  a,  1,  mask,  gvl);
}


e32xm8_t test_vmseqvi_mask_e32xm8_int32xm8 (e32xm8_t merge, int32xm8_t a, const int b, e32xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm8_int32xm8 (merge,  a,  1,  mask,  gvl);
}


e32xm8_t test_vmseqvi_mask_e32xm8_uint32xm8 (e32xm8_t merge, uint32xm8_t a, const unsigned int b, e32xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e32xm8_uint32xm8 (merge,  a,  1,  mask,  gvl);
}


e64xm1_t test_vmseqvi_mask_e64xm1_int64xm1 (e64xm1_t merge, int64xm1_t a, const long b, e64xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm1_int64xm1 (merge,  a,  1,  mask,  gvl);
}


e64xm1_t test_vmseqvi_mask_e64xm1_uint64xm1 (e64xm1_t merge, uint64xm1_t a, const unsigned long b, e64xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm1_uint64xm1 (merge,  a,  1,  mask,  gvl);
}


e64xm2_t test_vmseqvi_mask_e64xm2_int64xm2 (e64xm2_t merge, int64xm2_t a, const long b, e64xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm2_int64xm2 (merge,  a,  1,  mask,  gvl);
}


e64xm2_t test_vmseqvi_mask_e64xm2_uint64xm2 (e64xm2_t merge, uint64xm2_t a, const unsigned long b, e64xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm2_uint64xm2 (merge,  a,  1,  mask,  gvl);
}


e64xm4_t test_vmseqvi_mask_e64xm4_int64xm4 (e64xm4_t merge, int64xm4_t a, const long b, e64xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm4_int64xm4 (merge,  a,  1,  mask,  gvl);
}


e64xm4_t test_vmseqvi_mask_e64xm4_uint64xm4 (e64xm4_t merge, uint64xm4_t a, const unsigned long b, e64xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm4_uint64xm4 (merge,  a,  1,  mask,  gvl);
}


e64xm8_t test_vmseqvi_mask_e64xm8_int64xm8 (e64xm8_t merge, int64xm8_t a, const long b, e64xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm8_int64xm8 (merge,  a,  1,  mask,  gvl);
}


e64xm8_t test_vmseqvi_mask_e64xm8_uint64xm8 (e64xm8_t merge, uint64xm8_t a, const unsigned long b, e64xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e64xm8_uint64xm8 (merge,  a,  1,  mask,  gvl);
}


e8xm1_t test_vmseqvi_mask_e8xm1_int8xm1 (e8xm1_t merge, int8xm1_t a, const signed char b, e8xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm1_int8xm1 (merge,  a,  1,  mask,  gvl);
}


e8xm1_t test_vmseqvi_mask_e8xm1_uint8xm1 (e8xm1_t merge, uint8xm1_t a, const unsigned char b, e8xm1_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm1_uint8xm1 (merge,  a,  1,  mask,  gvl);
}


e8xm2_t test_vmseqvi_mask_e8xm2_int8xm2 (e8xm2_t merge, int8xm2_t a, const signed char b, e8xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm2_int8xm2 (merge,  a,  1,  mask,  gvl);
}


e8xm2_t test_vmseqvi_mask_e8xm2_uint8xm2 (e8xm2_t merge, uint8xm2_t a, const unsigned char b, e8xm2_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm2_uint8xm2 (merge,  a,  1,  mask,  gvl);
}


e8xm4_t test_vmseqvi_mask_e8xm4_int8xm4 (e8xm4_t merge, int8xm4_t a, const signed char b, e8xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm4_int8xm4 (merge,  a,  1,  mask,  gvl);
}


e8xm4_t test_vmseqvi_mask_e8xm4_uint8xm4 (e8xm4_t merge, uint8xm4_t a, const unsigned char b, e8xm4_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm4_uint8xm4 (merge,  a,  1,  mask,  gvl);
}


e8xm8_t test_vmseqvi_mask_e8xm8_int8xm8 (e8xm8_t merge, int8xm8_t a, const signed char b, e8xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm8_int8xm8 (merge,  a,  1,  mask,  gvl);
}


e8xm8_t test_vmseqvi_mask_e8xm8_uint8xm8 (e8xm8_t merge, uint8xm8_t a, const unsigned char b, e8xm8_t mask, unsigned int gvl) {
    return vmseqvi_mask_e8xm8_uint8xm8 (merge,  a,  1,  mask,  gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmseq\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmseq\.vi" } }*/

/* { dg-final { cleanup-saved-temps } } */

