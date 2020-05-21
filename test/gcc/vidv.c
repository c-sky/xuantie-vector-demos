
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_vidv_uint16xm1 (unsigned int gvl) {
    return vidv_uint16xm1 (gvl);
}


uint16xm2_t test_vidv_uint16xm2 (unsigned int gvl) {
    return vidv_uint16xm2 (gvl);
}


uint16xm4_t test_vidv_uint16xm4 (unsigned int gvl) {
    return vidv_uint16xm4 (gvl);
}


uint16xm8_t test_vidv_uint16xm8 (unsigned int gvl) {
    return vidv_uint16xm8 (gvl);
}


uint32xm1_t test_vidv_uint32xm1 (unsigned int gvl) {
    return vidv_uint32xm1 (gvl);
}


uint32xm2_t test_vidv_uint32xm2 (unsigned int gvl) {
    return vidv_uint32xm2 (gvl);
}


uint32xm4_t test_vidv_uint32xm4 (unsigned int gvl) {
    return vidv_uint32xm4 (gvl);
}


uint32xm8_t test_vidv_uint32xm8 (unsigned int gvl) {
    return vidv_uint32xm8 (gvl);
}


uint64xm1_t test_vidv_uint64xm1 (unsigned int gvl) {
    return vidv_uint64xm1 (gvl);
}


uint64xm2_t test_vidv_uint64xm2 (unsigned int gvl) {
    return vidv_uint64xm2 (gvl);
}


uint64xm4_t test_vidv_uint64xm4 (unsigned int gvl) {
    return vidv_uint64xm4 (gvl);
}


uint64xm8_t test_vidv_uint64xm8 (unsigned int gvl) {
    return vidv_uint64xm8 (gvl);
}


uint8xm1_t test_vidv_uint8xm1 (unsigned int gvl) {
    return vidv_uint8xm1 (gvl);
}


uint8xm2_t test_vidv_uint8xm2 (unsigned int gvl) {
    return vidv_uint8xm2 (gvl);
}


uint8xm4_t test_vidv_uint8xm4 (unsigned int gvl) {
    return vidv_uint8xm4 (gvl);
}


uint8xm8_t test_vidv_uint8xm8 (unsigned int gvl) {
    return vidv_uint8xm8 (gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvid\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvid\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

