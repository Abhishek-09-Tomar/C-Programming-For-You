// 9) C Program to Make a Simple Calculator.

// Observe : This calculator is working only on two numbers.

#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d\n", &num1);

    printf("Enter num2: ");
    scanf("%d\n", &num2);

    printf("The addition of num1 + num2 is %d\n", num1 + num2);
    printf("The subtraction of num1 - num2 is %d\n", num1 - num2);
    printf("The division of num1 / num2 is %d\n", num1 / num2);
    printf("The multiplication of num1 * num2 is %d\n", num1 * num2);
    printf("The modulus of num1 %% num2 is %d\n", num1 % num2);

    return 0;
}