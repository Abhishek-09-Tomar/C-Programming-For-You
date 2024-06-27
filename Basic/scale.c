// 9) C Program to Calculate Fahrenheit to Celsius.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float celsius, Fahrenheit;
    printf("Enter the temperature converts into fahrenheit: ");
    scanf("%f\n",&celsius);

    Fahrenheit = ((9/5)*celsius) + 32;

    printf("%.2f degree celsius is equal to the %.2f degree fahrenheit", celsius, Fahrenheit);
    return 0;
}
