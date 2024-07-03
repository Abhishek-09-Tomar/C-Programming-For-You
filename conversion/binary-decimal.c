// C Program For Binary to Decimal Conversion.

#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binaryValue)
{
    int decimalValue = 0, i = 0, remainder;
    while (binaryValue != 0)
    {
        remainder = binaryValue % 10;
        binaryValue /= 10;
        decimalValue += remainder * pow(2, i);
        ++i;
    }
    return decimalValue;
}

int main()
{
    int binaryValue = 1010;
    int decimalValue = binaryToDecimal(binaryValue);
    printf("Binary value as decimal: %d\n", decimalValue);

    return 0;
}