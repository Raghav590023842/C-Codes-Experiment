// 3.	Write a function that accepts pointers as parameters. 
// Pass variables by reference using pointers 
// and modify their values within the function.

#include <stdio.h>
void modify(int *num, float *decimal, char *character) {
    *num += 10;          
    *decimal *= 2.0f;     
    *character += 1;         
}
int main() {
    int num = 42;
    float decimal = 3.14f;
    char character = 'A';

    printf("Before modification:\n");
    printf("Integer variable value: %d\n", num);
    printf("Float variable value: %.2f\n", decimal);
    printf("Char variable value: %c\n", character);

    modify(&num, &decimal, &character);

    printf("\nAfter modification:\n");
    printf("Integer variable value: %d\n", num);
    printf("Float variable value: %.2f\n", decimal);
    printf("Char variable value: %c\n", character);

    return 0;
}