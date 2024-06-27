// C Program to Find Compound Interest.
/*

A = amount
P = principal
r = rate of interest
n = number of times interest is compounded per year
t = time (in years)
CI = A – P

*/
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}