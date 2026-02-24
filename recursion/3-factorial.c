#include "main.h"

/**
 * factorial - return factorial of n.
 * @n: int to be used.
 *
 * Return: int result.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
