#include <stdio.h>

int main() {
    printf("Hey\n");

    int *p; //pointer that points to an int variable
    double *ptr; //pointer that points to a double variable

    //pointer saves a memory address of an other variable

    int x;

    p = &x; // Βαλε τον δεικτη p να δειχνει στην x (& = διευθυνση του x)
    *p = 5; // Η μεταβλητη που δειχνει το *p (άρα το x) παίρνει την τιμή 5 (*p = 5 ειναι ιδιο με x=5)

    printf("%d\n", p);
    printf("x: %d", *p);

    printf("Memory address: %d\n",p);
    printf("Value of x (*ptr): %d\n",*p);

    x= 9;

    printf("Memory address: %d\n",p);
    printf("Value of x (*ptr): %d\n",*p);

    return 0;
}