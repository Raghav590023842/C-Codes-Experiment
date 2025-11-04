// 1.	Write a C program that uses functions to perform the following operations: 
// a.	Reading a complex number. 
// b.	Writing a complex number. 
// c.	Addition and subtraction of two complex numbers 
// Note: represent complex number using a structure. 

#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex readcomplex() {
    struct Complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void writecomplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}
struct Complex addcomplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
struct Complex subcomplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;
    printf("Enter first complex number:\n");
    c1=readcomplex();
    printf("Enter second complex number:\n");
    c2=readcomplex();
    sum = addcomplex(c1, c2);
    diff = subcomplex(c1, c2);
    printf("First ");
    writecomplex(c1);
    printf("Second ");
    writecomplex(c2);
    printf("Sum ");
    writecomplex(sum);
    printf("Difference ");
    writecomplex(diff);
    return 0;
}