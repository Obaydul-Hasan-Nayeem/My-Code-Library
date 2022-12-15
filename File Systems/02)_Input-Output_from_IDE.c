#include<stdio.h>

int main () {

    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

//    if (inputFile == NULL) {
//        printf("The input file is not found!");
//    }

    while(1) {
        char ch = fgetc(inputFile);
//        printf("%c", ch);

        if (ch == EOF) {
            break;
        }
        fputc(ch, outputFile);
    }

//    fclose(inputFile);
//    fclose(outputFile);

    return 0;
}
