/// Problem Statement:
/*
What does lexicographical comparison mean? Explain with examples. How can we order strings in lexicographic order in C?
*/

/// My Solution
Lexicographical Comparison:
Lexicographic comparison means dictionary like ordering on types that have several elements in some defined sequence.

Explanation with examples:
If the first element of a sequence A is less than the first element of a sequence B then A is lexicographically less than B. Likewise, if the first element of A is greater than the first element of B then A is lexicographically greater than B. If the first element of A is equal to the first element of B then the lexicographic order of A and B is determined by the lexicographic order of A's sequence and B's sequence with the first element removed from both sequences. An empty sequence is smaller than a non-empty sequence.

Some Strings as example:
adc
acd
bdc
dcb
adb

In Lexicographical Order:
acd
adc
adb
bdc
dcb

C Program to order strings in lexicographic order:
#include <stdio.h>
#include <string.h>

int main() {
   char str[5][50], temp[50];
   printf("Enter 5 words: ");


   for (int i = 0; i < 5; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   for (int i = 0; i < 5; ++i) {
      for (int j = i + 1; j < 5; ++j) {

         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
}




