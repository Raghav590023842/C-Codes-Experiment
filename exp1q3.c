#include <stdio.h>

int main() {
    char name[20];
    int age;

    printf("Please Enter your name");
    scanf("%s", name); 

    printf("Enter your age");
    scanf("%d", &age);

    printf("Your Name is %s! You are %d years old.\n", name, age);

    return 0;
}

