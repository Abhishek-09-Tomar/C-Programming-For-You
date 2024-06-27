// C Program to Print Prime Numbers From 1 to N.

#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{

	int N;
	
    printf("Enter number that you want prime till N : ");
    scanf("%d\n",&N);

    for (int i = 1; i <= N; i++) {


		if (isPrime(i)) {
			printf("\n%d\n", i);
		}
	}
	return 0;
}
