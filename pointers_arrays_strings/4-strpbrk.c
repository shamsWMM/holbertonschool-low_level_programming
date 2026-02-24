#include <stddef.h>

/**
 * _strpbrk - find first occurence of any char found in accept.
 * @s: string to be checked.
 * @accept: letters to be checked.
 *
 * Return: pointer to first char occurrence.
 */

char *_strpbrk(char *s, char *accept)
{
	int dict[94] = {0}, index = 0;
	const int ref = 32;

	while (accept[index])
	{
		dict[accept[index] - ref] += 1;
		index++;
	}

	index = 0;
	while (s[index])
	{
		if (dict[s[index++] - ref] > 0)
			return (s + index - 1);
	}

	return (NULL);
}
