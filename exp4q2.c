// 2.	Declare a local variable inside a function and try to access it outside the function. 
// Compare this with accessing the global variable from within the function.

#include <stdio.h>

int raghavmarks = 90; 

void showmarks() {
    int priyanshumarks = 80;
    printf("Inside function:\n");
    printf("Priyanshu's Marks (local variable) = %d\n", priyanshumarks);
    printf("Raghav's Marks (global variable) = %d\n", raghavmarks);
}

int main() {
    showmarks();

    printf("\nOutside function:\n");
    printf("Raghav's Marks (global variable) = %d\n", raghavmarks); 
    //printf("Trying to access Priyanshu's Marks (local variable) = %d", priyanshumarks);
    
    return 0;
}