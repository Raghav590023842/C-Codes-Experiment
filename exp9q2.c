// 2.	Open an existing file and 
// read its content character by character, and then close the file.

#include <stdio.h>
int main() {
    FILE *file = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\experiments lms\\exp9q1.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
    return 0;
}