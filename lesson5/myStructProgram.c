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

void saveList();

void loadList();

int main() {
    int choice, AM;
    char stname[20], stlastname[50];
    while (1) {
        printf("What do you want to do?\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Save List to File\n");
        printf("4. Read List from File\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("What is the student's am?\n");
                scanf("%d", &AM);

                printf("What is the student's name?\n");
                scanf("%s", &stname);

                printf("What is the student's last name?\n");
                scanf("%s", &stlastname);

                add(AM, stname, stlastname);

                printf("%s %s with AM: %d has been added", stname, stlastname, AM);
                break;
            }

            case 2: {
                readAll();
                break;
            }
            case 3: {
                saveList();
                break;
            }
            case 4: {
                loadList();
                break;
            }
            case 5:
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

void saveList() {
    struct student *r;
    r = head;

    if (r == NULL) {
        return;
    }

    FILE *fptr;

    fptr = fopen("studentList.txt", "wb");

    if (fptr == NULL) {
        printf("Something went wrong with the file\n");
        return;
    }

    while (r != NULL) {
        fwrite(r, sizeof(struct student), 1, fptr);
        r = r->next;
    }

    fclose(fptr);
    printf("Lise saved successfully\n");
}

void loadList() {
    struct student s;
    head = NULL;

    FILE *fptr;

    fptr = fopen("mydata.txt", "wb");

    if (fptr == NULL) {
        return;
    }

    printf("-------------------------\n");

    while (fread(&s, sizeof(struct student), 1, fptr)) {
        add(s.am,s.name,s.lastName);
    }

    printf("-------------------------\n");

    fclose(fptr);
    printf("File closed successfully\n");
}