//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceName[100], destName[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    src = fopen(sourceName, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}
