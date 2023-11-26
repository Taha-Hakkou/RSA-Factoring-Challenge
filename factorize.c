#include "factorize.h"

/**
 * factorize - factorizes a natural positive decimal number
 * @n: the number to factorize
 * Return: Nothing
 */
void factorize(long int n)
{
	long int m;

	if (n % 2 == 0){
		printf("%lu=%lu*%i\n", n, n/2, 2);
		return;
	}
	m = 3;
	while (m * m <= n)
	{
		if (n % m == 0){
			printf("%lu=%lu*%lu\n", n, n/m, m);
			return;
		}
		else
			m += 2;
	}
	printf("%lu=%lu*%i\n", n, n, 1);
	return;
}
