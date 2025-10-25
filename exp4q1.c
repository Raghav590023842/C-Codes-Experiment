// 1.	Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include<stdio.h>
int raghavmarks=10;
int addmarks(){
    return raghavmarks+5;
}
int submarks(){
    return raghavmarks-3;
}
int showmarks(){
    return raghavmarks;
}
int main(){
    int priyanshumarks=20;
    int totalmarks=priyanshumarks+raghavmarks;
    printf("Priyanshu Marks: %d\n",priyanshumarks);
    printf("Raghav Marks: %d\n",raghavmarks);
    printf("Total Marks: %d\n",totalmarks);
    printf("Raghav Marks after addition: %d\n",addmarks());
    printf("Raghav Marks after subtraction: %d\n",submarks());
    printf("Raghav Marks shown: %d\n",showmarks());
    return 0;
}
