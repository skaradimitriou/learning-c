#include <stdio.h>
#include <stdbool.h>

void getMaxNoFromArray(int myIntArray[6]);

void getMinNoFromArray(int myIntArray[6]);

void searchForNumberInArray(int myIntArray[6], int number);

void getSecondMaxNoFromArray(int myIntArray[6]);

void getSecondMinNoFromArray(int myIntArray[6]);

int main() {
    int myIntArray[6] = {35, 15, 75, 45, 52, 61};
    int myOtherArray[6] = {6, 5, 3, 2, 7, 6};

//    getMaxNoFromArray(myIntArray);
//    getMinNoFromArray(myIntArray);

//    searchForNumberInArray(myIntArray, 74);

//    getSecondMaxNoFromArray(myIntArray);
    getSecondMinNoFromArray(myIntArray);

    return 0;
}

void getMaxNoFromArray(int myIntArray[6]) {
    int maxNo = myIntArray[0], position = 0;

    for (int i = 0; i < 6; i++) {
        if (myIntArray[i] > maxNo) {
            maxNo = myIntArray[i];
            position = i + 1;
        }
    }

    printf("The max number of the array is : %d and was found at position: %d\n", maxNo, position);
}

void getMinNoFromArray(int myIntArray[6]) {
    int minNo = myIntArray[0], position = 0;

    for (int i = 0; i < 6; i++) {
        if (myIntArray[i] < minNo) {
            minNo = myIntArray[i];
            position = i + 1;
        }
    }

    printf("The min number of the array given was : %d and was found at position: %d\n", minNo, position);
}

void searchForNumberInArray(int myIntArray[6], int number) {
    int position = 0;
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (myIntArray[i] == number) {
            position = i + 1;
            found = true;
        }
    }

    if (found) {
        printf("The number %d exists at the position number %d in the given array", number, position);
    } else {
        printf("The number %d does not exist in the given array", number);
    }
}

void getSecondMaxNoFromArray(int myIntArray[6]) {
    int maxNo = myIntArray[0], secondMaxNo = myIntArray[0];

    for (int i = 0; i < 6; i++) {
        if (myIntArray[i] > maxNo) {
            maxNo = myIntArray[i];
        }
    }

    for (int j = 0; j < 6; j++) {
        if (myIntArray[j] != maxNo) {
            secondMaxNo = myIntArray[j];
            if (secondMaxNo > myIntArray[j]) {
                secondMaxNo = myIntArray[j];
            }
        }
    }

    printf("The max number of the array is : %d.\n", maxNo);
    printf("The second max number of the array is : %d.\n", secondMaxNo);
}

void getSecondMinNoFromArray(int myIntArray[6]) {
    int minNo = myIntArray[0], secondMinNo = myIntArray[0];

    for (int i = 1; i < 6; i++) {
        if (myIntArray[i] < minNo) {
            minNo = myIntArray[i];
        }
    }

    for (int j = 0; j < 6; j++) {
        if (myIntArray[j] != minNo) {
            if (myIntArray[j] < secondMinNo) {
                secondMinNo = myIntArray[j];
            }
        }
    }

    printf("The smallest number of the array is : %d.\n", minNo);
    printf("The second smallest number of the array is : %d.\n", secondMinNo);
}