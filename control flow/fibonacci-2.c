// C Program to find the sum of even-indices Fibonacci numbers.

#include <stdio.h>

int calculateEvenSum(int n)
{
	// return 0 if n is equals or less than to 0
	if (n <= 0)
		return 0;

	int fibo[2 * n + 1];
	fibo[0] = 0, fibo[1] = 1;

	// Initialize the result
	int sum = 0;

	// Adding the remaining terms
	for (int i = 2; i <= 2 * n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];

		if (i % 2 == 0)
			sum += fibo[i];
	}
	
	return sum;
}

int main()
{

	int n = 5;
	int sum = calculateEvenSum(n);

	
	printf("Even indexed Fibonacci Sum upto %d terms = %d",
		n, sum);

	return 0;
}
