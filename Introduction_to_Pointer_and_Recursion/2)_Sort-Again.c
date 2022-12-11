// Problem Statement

/*
You have given a string. Now your task is to sort this string in descending order. Implement this using function.

Sample Input 1
abddccss

Sample Output 1
ssddccba
*/

// Solution in C:
#include<stdio.h>

void sort_string (char str[]); // prototype of the function

// driver code
int main () {

    char str[100];
    scanf("%s", &str);

    sort_string(str);

    return 0;
}

// function to sort the string in descending order
void sort_string(char str[]) {
    // finding length of the string
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // putting the ASCII values of each character in an array
    int ar[100];
    for (int i = 0; i < len; i++) {
        ar[i] = str[i];
    }

    // sorting the array by bubble sort
    for (int i = 0; i < len; i++) {
        int mx = 0, mxIndex;
        for (int j = i; j < len; j++) {
            if (ar[j] > mx) {
                mx = ar[j];
                mxIndex = j;
            }
        }
        int temp = ar[i];
        ar[i] = mx;
        ar[mxIndex] = temp;
    }

    // printing the string by the array
    for (int i = 0; i < len; i++) {
        printf("%c", ar[i]);
    }
}


