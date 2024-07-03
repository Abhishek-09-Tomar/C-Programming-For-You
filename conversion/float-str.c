// C Program For Float to String Conversion.

#include <stdio.h>

int main()
{
    float floatValue = 3.14;
    char str[20];
    sprintf(str, "%f", floatValue);
    printf("Float value as string: %s\n", str);

    return 0;
}