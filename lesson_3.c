#include <stdio.h>
#include <string.h>

/*
 * This was a C lesson 2 by Alepis Efthymios on 8/12.
 * Topics Discussed: Strings, struct, union
 */

/*
 * Struct vs Union
 * -------
 * A struct is a block of memory that stores several data objects, where those objects don't overlap.
 * A union is a block of memory that stores several data objects, but has only storage for the largest
 * of these, and thus can only store one of the data objects at any one time.
 */

struct Employee {
    char name[50];
    char surname[50];
    char jobDesc[50];
    int AFM;
};

union User {
    char username[30];
    char email[50];
};

void printEmployeeDetails(struct Employee);

int main() {

    /*
     * In C programming, a string is a sequence of characters terminated with a null character \0. For example:
     * char name[] = "Stathis";
     *
     * When the compiler encounters a sequence of characters enclosed in the double quotation marks,
     * it appends a null character \0 at the end by default.
     * Example : [S][t][a][t][h][i][s][/0]
     */
//    char str1[] = "Stathis";
//
//    printf("Your name is : %s \n", str1);
//
//    // get length of a string
//    int len = strlen(str1);
//    printf("%s has %d characters \n",str1,len);

    struct Employee employee1;

    strcpy(employee1.name, "Stathis");
    strcpy(employee1.surname, "Karadimitriou");
    strcpy(employee1.jobDesc, "Jr. Software Engineer");
    employee1.AFM = 12345;

    printEmployeeDetails(employee1);

    struct Employee employee2;

    strcpy(employee2.name, "John");
    strcpy(employee2.surname, "Doe");
    strcpy(employee2.jobDesc, "UI/UX Designer");
    employee2.AFM = 345678;

    printEmployeeDetails(employee1);
    printEmployeeDetails(employee2);


//    union User user;
//
//    strcpy(user.username, "myUsername");
//    strcpy(user.email, "thisismymail@gmail.com");
//
//    printf("Username : %s\n",user.username);
//    printf("Email : %s\n",user.email);

    return 0;
}

/*
 * output template for each employee that needs to be shown to console
 */
void printEmployeeDetails(struct Employee employee) {
    printf("--------------------------------------\n");
    printf("Employee details bellow:\n");
    printf("\n");
    printf("Employee name: %s\n", employee.name);
    printf("Employee surname: %s\n", employee.surname);
    printf("Employee job title: %s\n", employee.jobDesc);
    printf("Employee AFM: %d\n", employee.AFM);
    printf("\n");
    printf("--------------------------------------\n");
}