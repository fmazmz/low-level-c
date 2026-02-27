#include <stdio.h>

int write_to_file() {
    printf("\n[INFO] Writing to file\n");

    FILE *pFile = fopen("../test.txt", "w");

    if (pFile == NULL) {
        printf("[ERR] Error while opening file\n");
        return 1;
    }

    char text[] = "Whiterose";

    fprintf(pFile, "%s", text);

    printf("[INFO] File written successfully\n");
    fclose(pFile);

    return 0;
}
