// 2) C Program to Check Whether Number is Even or Odd.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number n: ");
    scanf("%d\n", &n);

    if (n / 2 == 0)
    {
        printf("%d is an even number.", n);
    }
    else
    {
        printf("%d is an odd number.", n);
    }

    return 0;
}
