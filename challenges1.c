#include <stdio.h>
#include <stdbool.h>

/*
 *  Challenges in arrays
 *
 *  1. Get max/min element from given array
 *  2. Search for a number in given array
 *  3. Get second MaxNo/MinNo from given array
 *  4. Max/Min from 2 given arrays
 *
 */

void getMaxNoFromArray(int myIntArray[6]);

void getMinNoFromArray(int myIntArray[6]);

void searchForNumberInArray(int myIntArray[6], int number);

void getSecondMaxNoFromArray(int myIntArray[6]);

void getSecondMinNoFromArray(int myIntArray[6]);

void getMaxAndMinFromTwoArrays(int myFirstArray[6], int mySecondArray[6]);

void howManyElementsExistInSecondArray(int myFirstArray[6], int mySecondArray[6]);

int main() {
//    int myIntArray[6] = {35, 15, 75, 45, 52, 61};
//    int myOtherArray[6] = {6, 5, 3, 2, 7, 90};

//    getMaxNoFromArray(myIntArray);
//    getMinNoFromArray(myIntArray);

//    searchForNumberInArray(myIntArray, 74);

//    getSecondMaxNoFromArray(myIntArray);
//    getSecondMinNoFromArray(myIntArray);

//    getMaxAndMinFromTwoArrays(myIntArray,myOtherArray);

    int myArray[] = {1,2,3,4,5,6};
    int mySecondArray[] = {0,0,1,6,5};

    howManyElementsExistInSecondArray(myArray,mySecondArray);

    //getMaxAndMinFromTwoArrays(myArray,mySecondArray);

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

    //found ? printf("The number %d exists at the position number %d in the given array", number, position) : printf("The number %d does not exist in the given array", number);
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

void getMaxAndMinFromTwoArrays(int myFirstArray[6], int mySecondArray[6]) {
    int max = myFirstArray[0], min = myFirstArray[0];
    bool maxFoundInFirstTable = false, minFoundInFirstTable = false;

    for(int i=0; i < 6; i++){
        if(myFirstArray[i] > max) {
            max = myFirstArray[i];
            maxFoundInFirstTable = true;
        }
        else if(mySecondArray[i] > max) max = mySecondArray[i];

        else if(myFirstArray[i] < min) {
            min = myFirstArray[i];
            minFoundInFirstTable = true;
        }
        else if(mySecondArray[i] < min) min = mySecondArray[i];
    }

    if(maxFoundInFirstTable) printf("The largest number was %d and was found in the first array\n",max);
    else printf("The largest number was %d and was found in the second array\n",max);

    //maxFoundInFirstTable ? printf("The largest number was %d and was found in the first array\n",max) : printf("The largest number was %d and was found in the second array\n",max);

    if(minFoundInFirstTable) printf("The smallest number was %d and was found in the first array\n",min);
    else printf("The smallest number was %d and was found in the second array\n",min);

    //minFoundInFirstTable ? printf("The smallest number was %d and was found in the first array\n",min) : printf("The smallest number was %d and was found in the second array\n",min);
}

void howManyElementsExistInSecondArray(int myFirstArray[6], int mySecondArray[6]) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if(myFirstArray[i] == mySecondArray[j]){
                printf("%d exists in second array in %d position\n",myFirstArray[i],j);
            }
            //myFirstArray[i] == mySecondArray[j] ? printf("%d exists in second array\n",myFirstArray[i]) : "";
        }
    }
}