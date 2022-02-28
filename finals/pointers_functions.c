#include <stdio.h>

void swap(int *ptrA, int *ptrB);

int main() {
    int a = 5;
    int b = 10;

    printf("\n");
    printf("POINTERS IN C\n");
    printf("-------------\n");

    printf("Variable A: value = %d, memory address = %d\n", a, &a);
    printf("Variable B: value = %d, memory address = %d\n", b, &b);

    printf("------------\n");

    swap(&a, &b);
    printf("Swaping variables A & B\n");

    printf("------------\n");

    printf("Variable A: value = %d, memory address = %d\n", a, &a);
    printf("Variable B: value = %d, memory address = %d\n", b, &b);

    return 0;
}

void swap(int *ptrA, int *ptrB) {
    int k;

    k = *ptrA;
    *ptrA = *ptrB;
    *ptrB = k;
}