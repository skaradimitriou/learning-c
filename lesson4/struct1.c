#include <stdio.h>

struct student {
    int am;
    char name[30];
    char surname[30];
};


int main1a() {
    struct student s1, s2;

    printf("1st Student\n");
    printf("Enter am:");
    scanf("%d", &s1.am);
    printf("Enter name:");
    scanf("%s", s1.name);
    printf("Enter surname:");
    scanf("%s", s1.surname);

    printf("2nd Student\n");
    printf("Enter am:");
    scanf("%d", &s2.am);
    printf("Enter name:");
    scanf("%s", s2.name);
    printf("Enter surname:");
    scanf("%s", s2.surname);

    printf("-------------------------\n");
    printf("First Student: %s %s, with am:%d\n", s1.name, s1.surname, s1.am);
    printf("Second Student: %s %s, with am:%d\n", s2.name, s2.surname, s2.am);
    printf("-------------------------\n");


    return 0;
}