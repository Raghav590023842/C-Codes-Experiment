// 2.	WAP to read a list of integers and store it in a single dimensional array. 
// Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int positive=0,negative=0,odd=0,even=0;
    for(i=0;i<n;i++){
        if(arr[i]>=0)
            positive++;
        else
            negative++;
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Positive numbers: %d\n",positive);
    printf("Negative numbers: %d\n",negative);
    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n",odd);
    return 0;
}
