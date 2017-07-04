#include "advanced.h"

typedef struct cell_setup_ {
    int A;
    int C;
    int B;
} cell_setup_;

bool check() {
    cell_setup_ * C = reinterpret_cast<cell_setup_ *>(build());
    if(C->A == 1 && C->B == 2) return true; else return false;
}
