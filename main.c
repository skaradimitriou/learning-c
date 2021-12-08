#include <stdio.h>

/*
 *
 */

void myMethod();

int sum(int x, int y);

void evaluateExpression(int sum);

void performForLoop(int userChoice);

void performWhileLoop(int userChoice);

void performDoWhileLoop(int userChoice);

int main() {
    int userChoice;
    printf("Give a number");
    scanf("%d", &userChoice);

    performWhileLoop(userChoice);

    //performForLoop();

    //performDoWhileLoop();

    return 0;
}

void myMethod() {
    printf("Hello\n");
}

int sum(int x, int y) {
    return x + y;
}

void evaluateExpression(int sum) {
    if (sum > 10) {
        printf("The sum is greater than 10");
    } else if (sum < 10) {
        printf("The sum is less than 10");
    } else {
        printf("The sum is equal to 10");
    }
}

void performForLoop(int userChoice) {
    for(int i=0; i < userChoice; i++){
        myMethod();
    }
}

void performWhileLoop(int userChoice){
    int i=0;
    while(i< userChoice){
        myMethod();
        i++;
    }
}

void performDoWhileLoop(int userChoice){
    int i = 0;
    do {
        myMethod();
        i++;
    } while (i < userChoice);
}