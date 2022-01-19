#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int am;
    char name[20];
    char lastName[50];
    struct student *next; //pointer referencing to the struct itself
};

struct student *head;

void add(int am, char name[20], char lastName[50]);

void readAll();

int main() {
    int choice, AM;
    char stname[20], stlastname[50];
    while (1) {
        printf("What do you want to do?\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("What is the student's am?\n");
            scanf("%d",&AM);

            printf("What is the student's name?\n");
            scanf("%s",&stname);

            printf("What is the student's last name?\n");
            scanf("%s",&stlastname);

            add(AM, stname, stlastname);

            printf("%s %s with AM: %d has been added",stname,stlastname,AM);
        } else if (choice == 2) {
            readAll();
        } else {
            return 0;
        }
    }
}

void add(int am, char name[20], char lastName[50]) {
    struct student *pts;
    pts = malloc(sizeof(struct student));

    pts->am = am;
    strcpy(pts->name, name);
    strcpy(pts->lastName, lastName);

    if (head == NULL) {
        pts->next = NULL;
        head = pts;
    } else {
        pts->next = head;
        head = pts;
    }
}

void readAll() {
    struct student *temp;
    temp = head;

    if (temp == NULL) {
        return;
    } else {
        printf("-------------------------\n");

        while (temp != NULL) {
            printf("Student:  AM: %d, Name : %s, Last Name : %s\n", temp->am, temp->name, temp->lastName);
            temp = temp->next;
        }

        printf("-------------------------\n");
    }
}