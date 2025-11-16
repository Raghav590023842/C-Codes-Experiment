// 1.	Write a program to define multiple macro to perform arithmetic functions.

#include<stdio.h>
#define ADD(x, y) ((x) + (y))
#define SUBTRACT(x, y) ((x) - (y))
#define MULTIPLY(x, y) ((x) * (y))
#define DIVIDE(x, y) ((x) / (y))
int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Addition:%d\n",ADD(num1, num2));
    printf("Subtraction:%d\n",SUBTRACT(num1, num2));
    printf("Multiplication:%d\n",MULTIPLY(num1, num2));
    if (num2 != 0)
        printf("Division:%d\n",DIVIDE(num1, num2));
    else
        printf("Division by zero is not allowed.\n");
    
    return 0;
}