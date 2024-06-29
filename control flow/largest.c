// 4) C Program to Find Largest Number Among Three Numbers.

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter number num1: ");
    scanf(" %d", &num1);

    printf("Enter number num2: ");
    scanf(" %d", &num2);

    printf("Enter number num3: ");
    scanf(" %d", &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("num1 %d is the largest number.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("num2 %d is the largest number.\n", num2);
    else
        printf("num3 %d is the largest number.\n", num3);

    return 0;
}