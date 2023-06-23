#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *sourceFile, FILE *destinationFile) {
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
}

void convertToUpper(FILE *sourceFile, FILE *destinationFile) {
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destinationFile);
    }
}

void convertToLower(FILE *sourceFile, FILE *destinationFile) {
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(tolower(ch), destinationFile);
    }
}

void convertToPurelyUpper(FILE *sourceFile, FILE *destinationFile) {
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (islower(ch)) {
            fputc(toupper(ch), destinationFile);
        } else {
            fputc(ch, destinationFile);
        }
    }
}

int main() {
    FILE *sourceFile = fopen("f1", "r");
    FILE *destinationFile = fopen("f2", "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    copyFile(sourceFile, destinationFile);

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
