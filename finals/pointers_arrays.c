#include <stdio.h>

int main() {
    int pinakas[4];
    int *ptr;

    ptr = &pinakas[0];

    printf("Memory address of table: %d\n", &pinakas);
    printf("Value of table: %d\n", *ptr);

    pinakas[0] = 5;
    pinakas[1] = 4;
    pinakas[2] = 1;
    pinakas[3] = 2;

    for (int i = 0; i < 4; i++) {
        printf("Item no. %d, item value: %d, item memory address: %d\n", i + 1, pinakas[i], &ptr[i]);
    }

    printf("\n");
    return 0;
}