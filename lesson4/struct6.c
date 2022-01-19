#include <stdio.h>
#include <stdlib.h>

struct student {
    int am;
    char name[20];
    char lastName[50];
};

int main1() {
    struct student *pts;

    pts = (struct student *) malloc(2 * sizeof(struct student));

    for (int i = 0; i < 2; i++) {
        printf("Student %d \n", i + 1);

        printf("Enter AM: \n");
        scanf("%d", &(pts + i)->am);

        printf("Enter name: \n");
        scanf("%s", &(pts + i)->name);

        printf("Enter last name: \n");
        scanf("%s", &(pts + i)->lastName);
    }

    printf("-------------------------\n");

    for (int i = 0; i < 2; i++) {
        printf("Student No. %d:  AM: %d, Name : %s, Last Name : %s\n", i, (pts + i)->am, (pts + i)->name,
               (pts + i)->lastName);
    }

    printf("-------------------------\n");

    return 0;
}