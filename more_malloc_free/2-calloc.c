#include <stdlib.h>

void populate_array(void *arr, unsigned int len);

/**
 * _calloc - malloc an array with zeros.
 * @nmemb: number of elements in result;
 * @size: size of an element.
 *
 * Return: a pointer to int array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *result;

if (nmemb == 0 || size == 0)
	return (NULL);

result = malloc(nmemb * size);
if (!result)
	return (NULL);

populate_array(result, nmemb * size);

return (result);
}

/**
 * populate_array - populates an array with zeros.
 * @arr: array to be populated.
 * @len: length of memory.
 */
void populate_array(void *arr, unsigned int len)
{
	unsigned int i;
	char *arr_ref = arr;

	for (i = 0; i < len; i++)
		*(arr_ref + i) = 0;
}
