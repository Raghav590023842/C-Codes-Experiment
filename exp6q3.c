// 3.	Develop a recursive function FIBO (num) that accepts an integer argument. 
// Write a C program that invokes this function to 
// generate the Fibonacci sequence up to num. 

#include<stdio.h>
int fibo(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
int main(){
    int num,fib_value,i;
    printf("Enter an integer to generate Fibonacci sequence up to that number: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Fibonacci sequence up to %d:\n", num);
    for (i = 0; ; i++) {
        fib_value = fibo(i);
        if (fib_value > num)
            break;
        printf("%d ", fib_value);
    }
    printf("\n");
    return 0;
}