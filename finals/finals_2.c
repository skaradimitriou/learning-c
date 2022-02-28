#include <stdio.h>

int main (){

    char grade = 'C';

    switch(grade) {
        case 'A' :
            printf("Excellent!\n" );
            break;
        case 'B' :
            printf("Very good!\n" );
            break;
        case 'C' :
            printf("Good\n" );
            break;
        case 'D' :
            printf("Pass\n" );
            break;
        case 'F' :
            printf("Fail\n" );
            break;
        default :
            printf("Invalid grade\n" );
    }
    printf("Your grade is %c\n", grade );
    return 0;
}