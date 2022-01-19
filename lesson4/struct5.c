#include <stdio.h>
#include <stdlib.h>

struct student {
    int am;
    char name[20];
    char lastName[50];
};

int main() {
    struct student *pts;

    pts = (struct student *) malloc(2 * sizeof(struct student));

    // (*pts1) is the same as s1
    // (*pts1) is the same as pts1->

    printf("1st student \n");

    printf("Enter AM: \n");
    scanf("%d", &(pts + 0)->am);

    printf("Enter name: \n");
    scanf("%s", &(pts + 0)->name);

    printf("Enter last name: \n");
    scanf("%s", &(pts + 0)->lastName);

    printf("2nd student \n");

    printf("Enter AM: \n");
    scanf("%d", &(pts + 1)->am);

    printf("Enter name: \n");
    scanf("%s", &(pts + 1)->name);

    printf("Enter last name: \n");
    scanf("%s", &(pts + 1)->lastName);

    printf("-------------------------\n");
    printf("First Student:  AM: %d, Name : %s, Last Name : %s\n", (pts + 0)->am, (pts + 0)->name, (pts + 0)->lastName);
    printf("Second Student:  AM: %d, Name : %s, Last Name : %s\n", (pts + 1)->am, (pts + 1)->name, (pts + 1)->lastName);
    printf("-------------------------\n");

    return 0;
}