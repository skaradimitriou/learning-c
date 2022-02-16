#include <stdio.h>

int main() {
    char buff[100];
    char buff2[100];

    FILE *fptr;

    fptr = fopen("./lesson5/mydata.txt", "wb");

    if (fptr == NULL) {
        printf("Something went wrong with the file!");
        return 0;
    }

    //This will read a string (%s) and save it to buff.
    // EOF = EndOfFile
    while (fscanf(fptr, "%s %s", buff,buff2) != EOF) {
        printf("%s\n", buff);
        printf("%s\n", buff2);
    }

    fclose(fptr);
    printf("File closed successfully");

    return 0;
}