// 1.	Write a program to create a new file and write text into it.

#include <stdio.h>
int main() {
    FILE *file = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\experiments lms\\exp9q1.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Hello I am Raghav Vij"); 

    fclose(file);
    printf("Text written to file successfully.\n");
    return 0;
}