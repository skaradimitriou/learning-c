#include <stdio.h>

struct student {
    char name[30];
    int mark;
};

int main() {
    struct student s;

    FILE *fptr;

    fptr = fopen("./lesson5/mydata.txt", "wb");

    if (fptr == NULL) {
        printf("Something went wrong with the file!");
        return 0;
    }

    //This will read a string (%s) and save it to buff.
    // EOF = EndOfFile

    while (fread(&s, sizeof(struct student), 1, fptr)) {
        printf("Name %s, Mark : %d", s.name,s.mark);
    }

    fclose(fptr);
    printf("File closed successfully");

    return 0;
}