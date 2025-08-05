#include <stdio.h>
#include <conio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;

    // Ask for source and destination file names
    printf("Enter the name of the source file: ");
    scanf("%s", sourceName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destName);

    // Open the source file in read mode
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Cannot open or create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Read from source and write to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    getch();
}
