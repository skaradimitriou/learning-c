

#include "stdio.h"

int main() {

    double coffeePrice = 1.50;
    double pizzaPrice = 2;

    int choice;

    printf("Coffee or Pizza?\n");
    printf("-----------------\n");
    printf("1: Coffee, 2. Pizza, 3. Exit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            printf("Coffee costs %.2f euros\n", coffeePrice);
            break;
        }
        case 2: {
            printf("Pizza costs %f euros\n", pizzaPrice);
            break;
        }
        default:
            break;
    }


    return 0;
}