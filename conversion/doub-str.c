// C Program For Double  to String Conversion.

#include <stdio.h>

int main()
{
    double doubleValue = 3.14159;
    char str[20];
    sprintf(str, "%lf", doubleValue);
    printf("Double value as string: %s\n", str);

    return 0;
}