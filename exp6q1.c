// 1.	Develop a recursive and non-recursive function FACT(num) 
// to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. 
// Otherwise, FACT(n) = n * FACT(n-1). 
// Using this function, write a C program to compute the binomial coefficient. 
// Tabulate the results for different values of n and r with suitable messages. 

#include<stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n * factorial(n-1);
}
int binomial(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int factorialnr(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n, r;
    printf("Enter values for n and r (n >= r >= 0): ");
    scanf("%d %d", &n, &r);
    if(r > n || r < 0){
        printf("Invalid input. Ensure that n >= r >= 0.\n");
        return 1;
    }
    printf("Using Recursive Factorial:\n");
    printf("C(%d, %d) = %d\n", n, r, binomial(n, r));
    printf("Using Non-Recursive Factorial:\n");
    int binom_nr = factorialnr(n) / (factorialnr(r) * factorialnr(n - r));
    printf("C(%d, %d) = %d\n", n, r, binom_nr);

    printf("\nTabulated Results:\n");
    printf(" n \\ r |");
    for(int j = 0; j <= n; j++){
        printf(" %3d ", j);
    }
    printf("\n");
    printf("-------");
    for(int j = 0; j <= n; j++){
        printf("------");
    }
    printf("\n");
    for(int i = 0; i <= n; i++){
        printf("  %2d  |", i);
        for(int j = 0; j <= i; j++){
            int coeff = binomial(i, j);
            printf(" %3d ", coeff);
        }
        printf("\n");
    }
    
    return 0;
}
