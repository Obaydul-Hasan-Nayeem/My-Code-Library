/// Problem Statement
/*
Problem Statement:
Your keyboard is worn out after playing games for a long time. Now when you press the keys of the keyboard, the first character you press is pressed once, then the key you press is pressed twice, then the third character will be pressed once again, and the fourth character will be pressed twice, and so on. Implement it using function.

See the sample input-output for more clarification.

Sample Input-
-----------------------
abcd

Sample Output-
-----------------------
abbcdd
*/

/// Solution in C:
#include<stdio.h>

void press(char s[]); // prototype of the function

// driver code
int main () {

    char str[200];
    scanf("%s", str);

    press(str);

return 0;
}

// function to find the characters after pressing keys
void press(char s[]) {
    int toggle = 1;

    for (int i = 0; s[i] != '\0'; i++) {
            if (toggle == 1) {
            printf("%c", s[i]);
            toggle = 2;
          }
          else if (toggle == 2) {
            printf("%c%c", s[i], s[i]);
            toggle = 1;
          }
    }
}

