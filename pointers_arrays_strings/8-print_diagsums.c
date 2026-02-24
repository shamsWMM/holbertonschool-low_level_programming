#include "main.h"

void print_digits(int d);

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
		d1 += *(a + i + i * size);
		d2 += *(a + size - 1 - i + i * size);
	}

	print_digits(d1);
	_putchar(',');
	_putchar(' ');
	print_digits(d2);
	_putchar('\n');
}

/**
 * print_digits - prints number.
 * @d: integer to be printed.
 */
void print_digits(int d)
{
	if (d < 0)
	{
		_putchar('-');
		d *= -1;
	}
	if (d / 10 == 0)
		_putchar('0' + d);
	else
	{
		print_digits(d / 10);
		_putchar('0' + d % 10);
	}
}
