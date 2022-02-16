#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[30];
    int mark;
};

int main() {
    struct student s;
    int n;

    FILE *fptr;

    fptr = fopen("./lesson5/myStructData.txt", "wb");

    if (fptr == NULL) {
        printf("Something went wrong with the file!");
        return 0;
    }

    printf("Enter number of students:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("For student %d, enter name:", i + 1);
        scanf("%s", s.name);

        printf("Enter mark:");
        scanf("%d", &(s.mark));

        fwrite(&s, sizeof(struct student), 1, fptr);
    }

    fclose(fptr);
    printf("Data saved!");

    return 0;
}