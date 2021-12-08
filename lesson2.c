#include <stdio.h>

/*
 * This was a C lesson 2 by Alepis Efthymios on 8/12.
 * Topics Discussed: User Input |  User Output | If-else if - else | For, while, do-while loops
 */

/*
 * Methods should be declared at the top. If you want to use them further in the code, then declare them and
 * write your logic later on.
 */

void myMethod();

int sum(int x, int y);

void evaluateExpression(int sum);

void performForLoop(int userChoice);

void performWhileLoop(int userChoice);

void performDoWhileLoop(int userChoice);

int main() {
//    int userInput1, userInput2,sumOfInput;
//
//    printf("Give your first number: ");
//    scanf("%d", &userInput1);
//
//    printf("Give your second number: ");
//    scanf("%d", &userInput2);
//
//    sumOfInput = sum(userInput1,userInput2);
//    evaluateExpression(sumOfInput);
//
//    printf("The sum of %d and %d is: %d\n ",userInput1,userInput2,sumOfInput);

    int userChoice;
    printf("Give a number");
    scanf("%d", &userChoice);

    performWhileLoop(userChoice);

    //performForLoop(userChoice);

    //performDoWhileLoop(userChoice);

    return 0;
}

/*
 * Simple method printing a hello output to console & sum 2 integers
 */

void myMethod() {
    printf("Hello\n");
}

int sum(int x, int y) {
    return x + y;
}

/*
 * If - else if - else statement in C language
 */

void evaluateExpression(int sum) {
    if(sum > 10){
        printf("The sum is greater than 10");
    }else if(sum < 10){
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