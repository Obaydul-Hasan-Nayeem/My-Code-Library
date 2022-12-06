// Problem:
/*
Your faculty was born in the year 1997 and he loves the digits of this number. So he is asking you to write a code where you will be
given a string of digits as input and you need to find whether all the digits 1,9, and 7 is present in that string or not.
Use function to solve this problem.
[Hint: Write a function that will find a particular character in a string
and call that function thrice to find each of 1,9, and 7 in the given string.]

Sample Input 1:
36892502945417835

Sample Output 1:
Yes

Explanation 1:
All 1, 9, and 7 are present in the number

Sample Input:
3689250294547835

Sample Output:
No

Explanation:
The digit 1 is missing from the input string
*/


// Solution:
#include<stdio.h>

int find_character (char s[], char c); // function prototype

// driver code
int main () {
    char s[200];
    scanf("%s", s);
    if (find_character(s, '1') && find_character(s, '9') && find_character(s, '7')) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
return 0;
}

// function to find a specific character in a string
int find_character (char s[], char c) {
    int ans = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            ans = 1;
            break;
        }
    }

    if (ans) {
        return 1;
    }
    else {
        return 0;
    }
}

