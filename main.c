#include <stdio.h>

void myMethod();

int sum(int x, int y);

int main() {
    int userInput1, userInput2,sumOfInput;

    printf("Give your first number: ");
    scanf("%d", &userInput1);

    printf("Give your second number: ");
    scanf("%d", &userInput2);

    sumOfInput = sum(userInput1,userInput2);
    printf("The sum of %d and %d is: %d",userInput1,userInput2,sumOfInput);

    return 0;
}

void myMethod() {
    printf("Hello\n");
}

int sum(int x, int y) {
    return x + y;
}