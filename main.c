#include <stdio.h>

struct student {
    int am;
    char name[20];
    char lastName[50];
};

int main10() {
    struct student s1, s2;
    struct student *pts1, *pts2; //pointers

    pts1 = &s1;
    pts2 = &s2;

    // (*pts1) is the same as s1
    // (*pts1) is the same as pts1->

    printf("1st student \n");

    printf("Enter AM: \n");
    scanf("%d", &pts1->am);

    printf("Enter name: \n");
    scanf("%s", &pts1->name);

    printf("Enter last name: \n");
    scanf("%s", &pts1->lastName);

    printf("2nd student \n");

    printf("Enter AM: \n");
    scanf("%d", &pts2->am);

    printf("Enter name: \n");
    scanf("%s", &pts2->name);

    printf("Enter last name: \n");
    scanf("%s", &pts2->lastName);

    printf("-------------------------\n");
    printf("First Student:  AM: %d, Name : %s, Last Name : %s\n", pts1->am, pts1->name, pts1->lastName);
    printf("Second Student:  AM: %d, Name : %s, Last Name : %s\n", pts2->am, pts2->name, pts2->lastName);
    printf("-------------------------\n");

    return 0;
}