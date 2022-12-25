#include <stdio.h>
int main () {

    FILE *inputFile, *outputFile;
    inputFile = fopen("input2.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL) {
        fprintf(outputFile, "Not Found!");
//        printf("Not Found!");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        fscanf(inputFile, "%d", &x);
        sum += x;
    }

//    printf("Sum=%d", sum);
    fprintf(outputFile, "Sum = %d", sum);

    //    fclose(inputFile);
    //    fclose(outputFile);

    return 0;
}
