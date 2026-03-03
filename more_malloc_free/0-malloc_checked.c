#include <stdlib.h>

/**
 * malloc_checked - allocate memory.
 * @b: size to be allocated.
 *
 * Return: void pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *result;

result = malloc(b);

if (!result)
	exit(98);

return (result);
}
