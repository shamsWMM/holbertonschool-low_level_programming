#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate s1 and s2.
 * @s1: string to be concatenated.
 * @s2: string to be concatenated.
 *
 * Return: a pointer to new string, otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *result;
size_t i, len1 = 0, len2 = 0;

len1 = s1 ? strlen(s1) : len1;
len2 = s2 ? strlen(s2) : len2;

result = malloc(len1 + len2 + 1);

if (result == NULL)
	return (NULL);

for (i = 0; i < len1; i++)
	result[i] = s1[i];
for (i = 0; i < len2; i++)
	result[i + len1] = s2[i];
result[len1 + len2] = '\0';

return (result);
}
