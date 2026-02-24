#include "main.h"

int lookup_prime(int n, int i);

/**
 * is_prime_number - find if n is prime.
 * @n: num.
 *
 * Return: int result.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	return (lookup_prime(n, 5));
}

/**
 * lookup_prime - lookup prime.
 * @n: num used.
 * @i: starting index.
 *
 * Return: int result.
 */
int lookup_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	return (lookup_prime(n, i + 6));
}
