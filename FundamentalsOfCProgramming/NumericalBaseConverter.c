#include <stdio.h>
#include <stdlib.h>

int main(){
    long int number, rest, posicioninvectorbits = 0, i; 
    int *bitsVector = NULL;
    scanf("%ld", &number);

    if (number == 0) {
        printf("0\n");
        return 0;
    }
   
    while (number > 0){
        bitsVector = (int*) realloc(bitsVector, sizeof(int) * (posicioninvectorbits + 1));
        rest = number % 2;
        bitsVector[posicioninvectorbits] = rest; 
        number /= 2;
        posicioninvectorbits++;
    }

     for(i = posicioninvectorbits - 1; i >= 0; i--){
        printf("%d ", bitsVector[i]);
     }

     free(bitsVector);
    return 0;
}