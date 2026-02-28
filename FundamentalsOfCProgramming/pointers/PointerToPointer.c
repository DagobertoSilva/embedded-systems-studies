#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);

    printf("Value pointed to by p: %d\n", *p);
    printf("Address of p: %p\n", &p);
    printf("Address stored in p (address of x): %p\n", p);

    printf("Value pointed to by pp (value of x): %d\n", **pp);
    printf("Address of pp: %p\n", &pp);
    printf("Address stored in pp (address of p): %p\n", pp);

    return 0;
}