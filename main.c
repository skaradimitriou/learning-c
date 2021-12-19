#include <stdio.h>
#include <stdbool.h>

void getMaxNoFromArray(int myIntArray[6]);
void getMinNoFromArray(int myIntArray[6]);
void searchForNumberInArray(int myIntArray[6],int number);

int main() {
    int myIntArray[6] = {35,15,75,45,52,61};
    getMaxNoFromArray(myIntArray);
    getMinNoFromArray(myIntArray);

    searchForNumberInArray(myIntArray,74);

    return 0;
}

void getMaxNoFromArray(int myIntArray[6]){
    int maxNo = myIntArray[0];
    int position = 0;

    for(int i=0; i < 6; i++){
        if(myIntArray[i] > maxNo){
            maxNo = myIntArray[i];
            position = i+1;
        }
    }

    printf("The max number of the array is : %d and was found at position: %d\n",maxNo,position);
}

void getMinNoFromArray(int myIntArray[6]){
    int minNo = myIntArray[0];
    int position = 0;

    for(int i=0; i < 6; i++){
        if(myIntArray[i] < minNo){
            minNo = myIntArray[i];
            position = i+1;
        }
    }

    printf("The min number of the array given was : %d and was found at position: %d\n",minNo,position);
}

void searchForNumberInArray(int myIntArray[6], int number){
    int position = 0;
    bool found = false;

    for(int i=0; i < sizeof(myIntArray); i++){
        if(myIntArray[i] == number){
            position = i+1;
            found = true;
        }
    }

    if(found){
        printf("The number %d exists at the position number %d in the given array",number,position);
    } else{
        printf("The number %d does not exist in the given array",number);
    }
}

