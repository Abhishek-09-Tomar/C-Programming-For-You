// 1) C Program to Check Whether a Number is Positive, Negative, or Zero.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number n: ");
    scanf("%d\n", &n);

    if (n > 1)
    {
        printf("%d is a positive number.", n);
    }
    else if (n == 0)
    {
        printf("%d is equal to zero.", n);
    }
    else
    {
        printf(" %d is a negative number.", n);
    }

    return 0;
}
