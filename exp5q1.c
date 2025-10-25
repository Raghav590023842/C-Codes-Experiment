// 1.	WAP to read a list of integers and store it in a single dimensional array. 
// Write a C program to print the second largest integer in a list of integers.

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
    int flargest=0,slargest=0;
    for(i=0;i<n;i++){
        if(arr[i]>flargest){
            slargest=flargest;
            flargest=arr[i];
        }
        else if(arr[i]>slargest && arr[i]!=flargest){
            slargest=arr[i];
        }
    }
    
    printf("Second largest element is: %d\n",slargest);
    
    return 0;
}
