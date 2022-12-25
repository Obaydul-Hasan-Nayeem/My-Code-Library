/*
    file_name.exe < input.txt
    file_name.exe < output.txt
    file_name.exe < input.txt > output.txt
*/


#include<stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("Sum = %d", sum);

    //    fclose(inputFile);
    //    fclose(outputFile);

    return 0;
}

