#include "basic.h"

typedef struct cell_setup_ {
    int A;
    int B;
} cell_setup_;

void * build() {
    cell_setup_ * S = new cell_setup_;
    S->A = 1;
    S->B = 2;

    return (void *)S;
}
