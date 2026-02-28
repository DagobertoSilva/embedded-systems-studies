#include <stdio.h>

int main() {
    int array[5];
    int *p = array;

    printf("WITHOUT POINTER: Address of position 2 in the array: %p\n", &array[2]);
    printf("WITH POINTER: Address of position 2 in the array: %p\n", (p + 2));

    return 0;
}