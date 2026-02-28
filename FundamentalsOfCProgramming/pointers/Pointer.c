#include <stdio.h>

int main() {
    int x = 10;
    int *pPTR = &x;
    
    printf("Address of x: %p\n", &x);
    printf("Address stored in pPTR: %p\n", pPTR);
    printf("Value of x: %d\n", x);
    printf("Value pointed to by pPTR: %d\n", *pPTR);

    return 0;
}