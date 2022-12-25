// Uses of file keeping: Log file
#include <stdio.h>

int main () {

    FILE *logFile;
    logFile = fopen("log.txt", "a");

    fprintf(logFile, "Hello at 12.35 am\n");

//    FILE *inputFile;
//    inputFile = fopen("habijabi.txt", "r");

//    if (inputFile == NULL) {
//        fprintf(logFile, "The file is not found at 12 am!\n");
//        return 0;
//    }


    //    fclose(inputFile);
    //    fclose(outputFile);

    return 0;
}
