#include "main.h"

/**
 * _memset - sets each element in s with char b.
 * @s: memory area to be set.
 * @b: value to use.
 * @n: length of s.
 *
 * Return: a pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[--n] = b;
	}
	return (s);
}
