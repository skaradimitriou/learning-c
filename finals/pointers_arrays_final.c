#include <stdio.h>

void func(int *p, int n);

int main() {
    int pin[100];

    for (int i = 0; i < 100; i++) {
        pin[i] = i;
    }

    for (int i = 0; i < 100; i++) {
        printf("%d | ", pin[i]);
    }

    func(pin, 100);

    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 100; i++) {
        printf("%d | ", pin[i]);
    }

    return 0;
}

void func(int *p, int n) {
    int i;

    for (i = 0; i < n; i++) {
        p[i] = 2 * i;
    }
}