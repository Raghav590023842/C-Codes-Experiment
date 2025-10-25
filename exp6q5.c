// 5.	Develop a function REVERSE (str) that accepts a string argument. 
// Write a C program that invokes this function to find the reverse of a given string. 

#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, j;
    char temp;
    j = strlen(str) - 1; 

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
