// Problem:
/*
Write a C program that will take a string  as input from you
and change the cases of the characters. If the letter is capital,
change it into small and if the letter is small change it into capital letter.
Look at the test case and explanation for more clarification.

Sample Input:
hElLoWorld

Sample Output:
HeLlOwORLD

Explanation:
Here the first letter is small in the given input that's why we converted it into capital
and the second letter is capital that's why we converted it into small.

*/


// Solution:
#include<stdio.h>

void changeCase (char s[]); // function protype

// driver code
int main () {

    char s[200];
    scanf("%s", s);

    changeCase(s);

return 0;
}

// function to change uppercase to lowercase; or lowercase to uppercase
void changeCase (char s[]) {
     for (int i = 0; s[i] != '\0'; i++) {
        int ascii = (int)s[i];
        if (ascii < 97) {
           s[i] = (char)(ascii + 32);
        }
        else {
           s[i] = (char)(ascii - 32);
        }
    }

    printf("%s", s);
}

