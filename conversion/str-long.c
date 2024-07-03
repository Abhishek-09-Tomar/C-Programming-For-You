// C Program For String to Long Conversion.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "12345";
    long longValue = strtol(str, NULL, 10);
    printf("String value as long: %ld\n", longValue);

    return 0;
}