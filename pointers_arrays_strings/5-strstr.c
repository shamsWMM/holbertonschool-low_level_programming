#include <stddef.h>

/**
 * _strstr - find first occurence of needle found in haystack.
 * @haystack: string to be checked.
 * @needle: letters to be checked.
 *
 * Return: pointer to first char occurrence.
 */

char *_strstr(char *haystack, char *needle)
{
	int h, n;

	for (h = 0; haystack[h]; h++)
	{
		for (n = 0; needle[n] && haystack[h + n] == needle[n]; n++)
			;
		if (!needle[n])
			return (haystack + h);
	}

	return (NULL);
}
