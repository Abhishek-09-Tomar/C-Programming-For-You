// 8) C Program to Swap Two Numbers.

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d\n", &num1);

    printf("Enter num2: ");
    scanf("%d\n", &num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("The num1 becomes %d and num2 becomes %d\n", num1, num2);
    return 0;
}