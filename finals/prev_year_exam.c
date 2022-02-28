#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct patient {
    char fullName[50];
    int yearsOld;
    char gender[10];
    char ypokeimenoNosima[50];
    struct patient *next;
};

typedef struct patient PATIENT;

struct patient *head;

void addPatient(char fullName[50], int yearsOld, char gender[10], char ypokeimenoNosima[50]) {
    struct patient *ptr;
    ptr = malloc(sizeof(PATIENT));

    if (!ptr) {
        printf("Adunamia desmeusis mnimis");
        return;
    }

    strcpy(ptr->fullName, fullName);
    strcpy(ptr->gender, gender);
    strcpy(ptr->ypokeimenoNosima, ypokeimenoNosima);
    ptr->yearsOld = yearsOld;

    if (head == NULL) {
        ptr->next = NULL;
        head = ptr;
    } else {
        ptr->next = head;
        head = ptr;
    }
}

void countPatients() {
    struct patient *temp;
    temp = head;
    int counter = 0;

    while (temp != NULL) {
        counter++;
        temp = temp->next;
    }

    printf("There are %d krousmata in your list.\n", counter);
}

void getFullNames() {
    struct patient *temp;
    temp = head;

    if (temp == NULL) {
        return;
    } else {
        while (temp != NULL) {
            printf("Patient: %s \n", temp->fullName);
            temp = temp->next;
        }
    }
}

int main() {
    char fullName[50], gender[10], ypokeimenoNosima[50];
    int choice, yearsOld;

    printf("C Lesson Exam 2022\n");
    printf("------------------\n");
    printf("\n");

    while (1) {
        printf("Main menu:\n");
        printf("1: Eisagogi krousmatos\n");
        printf("2: Arithmos krousmaton sth lista\n");
        printf("3: Onomateponuma Krousmaton\n");
        printf("4: Exit\n");

        printf("\n");

        printf("Give your option:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {

                printf("Give the fullname of the krousma: \n");
                scanf("%s", &fullName);

                printf("Years old? \n");
                scanf("%d", &yearsOld);

                printf("Give the gender of the krousma: \n");
                scanf("%s", &gender);

                printf("Give the ypokeimenoNosima of the krousma: \n");
                scanf("%s", &ypokeimenoNosima);

                printf("Fullname: %s, %d years old, %s, ypokeimenoNosima: %s\n ", fullName, yearsOld, gender,ypokeimenoNosima);
                printf("\n");

                addPatient(fullName, yearsOld, gender, ypokeimenoNosima);

                break;
            }
            case 2: {
                countPatients();
                break;
            }

            case 3: {
                getFullNames();
                break;
            }

            case 4: {
                printf("Program exited successfully");
                return 0;
            }

            default: {
                printf("Unknown command");
                break;
            }
        }
    }

    return 0;
}