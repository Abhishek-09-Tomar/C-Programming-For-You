// C Program For Decimal to Binary Conversion.

#include <stdio.h>

void decToBinary(int decimalValue)
{
    if (decimalValue > 1)
    {
        decToBinary(decimalValue / 2);
    }
    printf("%d", decimalValue % 2);
}

int main()
{
    int decimalValue = 10;
    printf("Decimal value as binary: ");
    decToBinary(decimalValue);
    printf("\n");

    return 0;
}