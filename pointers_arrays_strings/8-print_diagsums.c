#include "main.h"

/**
 * print_diagsums - prints diag sums.
 * @a: square matrix to be used.
 * @size: dimension of square matrix a.
 */

void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i][i];
		d2 += a[i][size - i - 1];
	}

	while (d1)

}

/**
 * print_diagsums - prints diag sums.
 * @a: square matrix to be used.
 * @size: dimension of square matrix a.
 */
void print_digits(int d)
{
	if (d / 10 == 0)
		_putchar(d);
	print_digits(d / 10);
}
