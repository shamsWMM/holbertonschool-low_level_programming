#include <stdlib.h>

/**
 * _strdup - create a copy of s.
 * @s: the string to be copied.
 *
 * Return: a pointer to the copy of s, otherwise NULL.
 */
char *_strdup(char *s)
{
char *result;
size_t i, len = 0;

if (s == NULL)
	return (NULL);

while (s[len])
	len++;

result = malloc(len);
if (result == NULL)
	return (NULL);

for (i = 0; i <= len; i++)
	result[i] = s[i];

return (result);
}
