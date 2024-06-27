// 5) C Program to Check Whether a Number is Prime or Not

#include <stdio.h>
int main()
{
    int x;
    printf("Enter number x: ");
    scanf("%d\n", &x);

    if (x % 2 == 0)
    {
        printf("The number %d is a prime number", x);
    }
    else
    {
        printf("The number %d is not a prime number", x);
    }
    return 0;
}