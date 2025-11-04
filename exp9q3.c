// 3.	Open a file, read its content line by line, and display each line on the console.

#include <stdio.h>
int main() {
    FILE *file = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\experiments lms\\exp9q1.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[256];
    printf("File content line by line:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}