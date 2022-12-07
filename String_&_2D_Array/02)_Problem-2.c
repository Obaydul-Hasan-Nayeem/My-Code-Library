/// Problem Statement:
/*
char s = “america”
What is wrong with this C statement. Mark the errors and fix them.
*/

/// My Solution:
There are some errors in the given statement. Such that:
We can not assign more than one character in a char type variable.  If we want to assign like this, we must declare a char type array (not variable).
There will be a semicolon (;) at the end of the line.
We have to use inverted commas like (“ “), but not like (“”).

 The statement after fixing the errors:
         char s[] = "america";



/// Problem Setter's Solution
In this C statement I find some errors,
First error is not using the 3rd bracket after the variable to declare this string. We know the string is a character array, So when we declare an array we need to use 3rd brackets after the variable.
After this correction the C Statement is,
              char s[] = “america”
Second error is not using a semicolon at the end of the statement. The semicolon tells that the current statement has been terminated.
After this correction the C statement is,
              char s[] = “america”;
