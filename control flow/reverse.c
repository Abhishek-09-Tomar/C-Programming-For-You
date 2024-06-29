// 16) C Program to Reverse a Number.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, temp;

    printf("Enter number a: ");
    scanf("%d\n", &a);

    printf("Enter number b: ");
    scanf("%d\n", &b);

    temp = a;
    a = b;
    b = temp;
    printf("The value of a after reverse is %d and b is %d ", a, b);

    return 0;
}
