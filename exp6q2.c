// 2.	Develop a recursive function GCD (num1, num2) that accepts two integer arguments. 
// Write a C program that invokes this function 
// to find the greatest common divisor of two given integers. 

#include<stdio.h>
int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main(){
    int num1, num2;
    printf("Enter two integers to find their GCD: ");
    scanf("%d %d", &num1, &num2);
    if(num1 < 0 || num2 < 0){
        printf("Please enter non-negative integers only.\n");
        return 1;
    }
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    return 0;
}