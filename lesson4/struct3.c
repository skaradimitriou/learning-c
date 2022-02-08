#include <stdio.h>
#include <stdlib.h>

struct student {
    int am;
    char name[30];
    char surname[30];
};

int main3() {
    struct student *pts1, *pts2;

    pts1 = malloc(sizeof(struct student));
    pts2 = malloc(sizeof(struct student));

    printf("1st Student\n");
    printf("Enter am:");
    scanf("%d", &pts1->am);
    printf("Enter name:");
    scanf("%s", pts1->name);
    printf("Enter surname:");
    scanf("%s", pts1->surname);

    printf("2nd Student\n");
    printf("Enter am:");
    scanf("%d", &pts2->am);
    printf("Enter name:");
    scanf("%s", pts2->name);
    printf("Enter surname:");
    scanf("%s", pts2->surname);

    printf("*****************************************************\n");
    printf("First Student: %s %s, with am:%d\n", pts1->name, pts1->surname, pts1->am);
    printf("Second Student: %s %s, with am:%d\n", pts2->name, pts2->surname, pts2->am);
    printf("*****************************************************\n");

    return 0;
}