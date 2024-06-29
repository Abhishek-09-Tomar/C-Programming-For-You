// 20) C Program to Check whether the input number is a Neon Number.

#include <stdio.h>
int Neon_Number(int num)
{
    int square = num * num, n = square, digit, sum = 0;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if (sum == num)
        return 1;
    else
        return 0; 
}

int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d\n", &num);


    int ans = Neon_Number(num);
    if (ans == 1)
    {
        printf("%d is a neon number.", num);
    
    }   else {  printf("%d is not a neon number.", num);}
    return 0;
}
