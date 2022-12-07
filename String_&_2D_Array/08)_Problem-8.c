/// Problem Statement:
/*
What does ASCII value of a character mean? How can you print the ASCII value of a character in C language?
*/

/// My Solution
Meaning of ASCII value of a character:
ASCII (American Standard Code for Information Interchange) is the most common character encoding format for text data in computers and on the internet.

In C programming, a character variable holds ASCII value rather than that character itself. This integer value is the ASCII code of the character. For example, the ASCII value of 'A' is 65.

The way how we can print the ASCII value of a character in C language:
> We can print the ASCII values in C of any character by using the %d format specifier.
> To print all ASCII characters, we can use a loop that iterates through numbers 0 to 255 and then print the characters using %c and %d format specifiers.

Example:
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

    return 0;
}




