//3.(a)	WAP to generate the following set of output.
// 
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        num = 1; 
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1); 
        }
        printf("\n");
    }

    return 0;
}


