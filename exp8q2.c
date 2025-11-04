// 2.	Perform pointer arithmetic (increment and decrement)
//  on pointers of different data types. 
// Observe how the memory addresses change and the effects on data access.

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

    nptr++;
    fptr++;
    cptr++;
    printf("\nAfter incrementing pointers:\n");
    printf("Integer pointer address: %p\n", nptr);
    printf("Float pointer address: %p\n", fptr);
    printf("Char pointer address: %p\n", cptr);

    nptr--;
    fptr--;
    cptr--;
    printf("\nAfter decrementing pointers:\n");
    printf("Integer pointer address: %p\n", nptr);
    printf("Float pointer address: %p\n", fptr);
    printf("Char pointer address: %p\n", cptr);
    
    return 0;
}
