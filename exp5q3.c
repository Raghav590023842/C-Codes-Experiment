// 3.	WAP to read a list of integers and store it in a single dimensional array. 
// Write a C program to find the frequency of a particular number in a list of integers.

#include<stdio.h>
int main(){
    int i,num,n,frequency=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to find frequency: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num)
            frequency++;
    }
    printf("Frequency of %d is: %d\n",num,frequency);
    
    return 0;
}
