#include <stdio.h>

struct student {
    int am;
    char name[30];
    char surname[30];
};

int main1b() {

    struct student s1, s2;

    struct student *pts1, *pts2;
    pts1 = &s1;
    pts2 = &s2;

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

    // Replace "s1" with "pts1->" or "(*pts1)" and "s2" with "pts2->" or "(*pts2)"
    printf("*****************************************************\n");
    printf("First Student: %s %s, with am:%d\n", pts1->name, pts1->surname, pts1->am);
    printf("Second Student: %s %s, with am:%d\n", pts2->name, pts2->surname, pts2->am);
    printf("*****************************************************\n");

    return 0;
}