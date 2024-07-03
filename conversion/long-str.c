// C progam For long to string conversion.

#include <stdio.h>

int main()
{
    long longValue = 12345;
    char str[20];
    sprintf(str, "%ld", longValue);
    printf("Long value as string: %s\n", str);

    return 0;
}