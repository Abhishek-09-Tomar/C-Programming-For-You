// 18) C Program to Check Whether a Number is Prime or Not.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d\n", &n);

    if (n / 2 && n % 2 == 0)
    {
        printf("The number %d is a prime number.", n);
    }
    else
    {
        printf("The number %d is not a prime number.", n);
    }
    return 0;
}
