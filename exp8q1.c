// 1.	Declare different types of pointers (int, float, char) 
// and initialize them with the addresses of variables. 
// Print the values of both the pointers and the variables they point to.

#include <stdio.h>
int main() {
    int num = 42;
    float decimal = 3.14;
    char character = 'A';

    int *nptr = &num;
    float *fptr = &decimal;
    char *cptr = &character;

    printf("Integer variable value: %d\n", num);
    printf("Integer pointer address: %p, value pointed to: %d\n", nptr, *nptr);

    printf("Float variable value: %.2f\n", decimal);
    printf("Float pointer address: %p, value pointed to: %.2f\n", fptr, *fptr);

    printf("Char variable value: %c\n", character);
    printf("Char pointer address: %p, value pointed to: %c\n", cptr, *cptr);

    return 0;
}