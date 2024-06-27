// C Program to Add Two Complex Numbers.

#include <stdio.h>

typedef struct {
    float real;  
    float imag;
} Complex; 

int main() {
    Complex num1, num2, sum;

    // Input for first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input for second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Adding the complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Displaying the sum
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}