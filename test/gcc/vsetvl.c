
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

unsigned int test_vsetvl (unsigned int avl, int vtype) {
    return vsetvl (avl, vtype);
}

/* { dg-final { scan-assembler-times "vsetvl\t" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

