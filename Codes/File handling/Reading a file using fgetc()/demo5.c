#include <stdio.h>

int main() {
    // 1. Open the file in read mode ("r")
    FILE *file = fopen("test.txt", "a");
    
    // 2. Always verify the file opened successfully
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int ch; // Must be int, not char

    // 3. Read character by character until End of File (EOF)
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Print the character to console
    }

    // 4. Close the file to free system resources
    fclose(file);
    return 0;
}
