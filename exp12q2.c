// 2.	Write a program to define a function in directives.

#include<stdio.h>
#define cube(x) ((x) * (x) * (x))
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The Cube of %d is: %d\n", num, cube(num));
    
    return 0;
}