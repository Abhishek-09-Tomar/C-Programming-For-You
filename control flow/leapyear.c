// C Program to Check Leap Year.

#include <stdio.h>
int main()
{
    int year_num;
    printf("Enter year number = ");
    scanf("%d\n", &year_num);

    if (year_num % 4 == 0 && year_num % 400 == 0 && year_num % 100 == 0)
    {
        printf("%d is a leap year.", year_num);
    }

    else
    {
        printf("%d is not a leap year.", year_num);
    }

    return 0;
}
