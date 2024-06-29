// 14) C Program to Display Armstrong Numbers Between 1 to 1000.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;


    // Put the range of armstrong number from 1 to 1000 by using the for loop.
    for(num = 1; num <= 1000; num++) {
        originalNum = num;

        // Find the number of digits in the number.
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Check if the number is Armstrong or not.
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d is an Armstrong number.\n", num);
        }

        n = 0;
        result = 0;
    }

    return 0;
}