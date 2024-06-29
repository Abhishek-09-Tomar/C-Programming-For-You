// 8) C Program to Find Factorial of a Number.

#include <stdio.h>

// function to find the factorial of any n number.
int factorial(int n)
{
    // logic of factorial.
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{

    int n;
    printf("Enter any positive integer to know the value of factorial : ");
    scanf("%d", &n);

// restriction on negative integer
    if (n < 0)
    {
        printf("Negative number of factorial is undefined.");
    }
    else
    {
        printf("The factorial of %d is %d", n, factorial(n));
    }

    return 0;
}