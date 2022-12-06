// Problem:
/*
Write a C program that will take a string and another number as input.
Shift all the characters of the string by that numerical value.
The string will consist of only small letters. Look at the explanation for more clarification.

Sample Input:
smiley
5

Sample Output:
xrnqjd

Explanation:
Here, the first character was s and it has been shifted by 5 units, that is, s+5 = x,
thus we got the character ‘x’ in the output. Similarly all the character
by shifting the characters by 5 units. Take a closer look at the last character.
The character was ‘y’ but after shifting it by 5 units we got ‘d’.
That is because we traversed the letters in a circular fashion. After ‘y’ comes ‘z’ then ‘a’ then ‘b’ then ‘c’
and then finally ‘d’. Thus, ‘y’+5 will be ‘d’ in our program. Be careful about this case.


*/


// Solution:
#include<stdio.h>

void shift (char s[], int n); // function prototype

// driver code
int main () {

    char s[100];
    scanf("%s", s);

    int n;
    scanf("%d", &n);

    shift(s, n);

return 0;
}

// function to shift the character by n units
void shift (char s[], int n) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] + n <= 122) {
            s[i] = (char)(s[i] + n);
        }
        else {
            s[i] = (char)(97 + (n - (122 - s[i])) - 1);
        }
    }

    printf("%s", s);
}


