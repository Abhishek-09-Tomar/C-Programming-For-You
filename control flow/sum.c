// 5) C Program to Calculate Sum of Natural Numbers using for loop.

/*
Note : This problem is solved in many ways we solve it by two methods by using the for loop(as iteratively and as creating a function) and i suggest that when you try to run this code run only single one at a time else you want see some error.

You can also solve it by using the formula of sum of n natural numbers.

*/

#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}

//  C Program to Calculate Sum of Natural Numbers by creating function for loop.


/*
#include <stdio.h>

int sumOfNaturalNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = sumOfNaturalNumbers(n);

    printf("The sum of first %d natural numbers is: %d\n", n, result);

    return 0;
}

*/