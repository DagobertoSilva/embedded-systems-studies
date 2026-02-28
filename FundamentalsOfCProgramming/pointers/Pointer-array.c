#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int *vPTR = v;
    int x = 10;
    int *pPTR = &x;

    printf("Address of x: %p\n", &x);
    printf("Address stored in pPTR: %p\n", pPTR);
    printf("Value of x: %d\n", x);
    printf("Value pointed to by pPTR: %d\n", *pPTR);

    printf("WITHOUT POINTER: Address of position 2 of the array: %p\n", &v[2]);
    printf("WITH POINTER: Address of position 2 of the array: %p\n", (vPTR + 2));

    return 0;
}