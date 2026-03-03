#include <stdlib.h>

void populate_2d_int_array(int **arr, int h, int w);

/**
 * alloc_grid - allocated a pointer to a w by h array.
 * @h: height of array.
 * @w: width of array.
 *
 * Return: a pointer to 2d int array.
 */
int **alloc_grid(int w, int h)
{
int **result, i = 0;

if (w <= 0 || h <= 0)
	return (NULL);

result = malloc(w * sizeof(*result));
for (i = 0; i < w; i++)
	result[i] = malloc(h * sizeof(*(result[i])));

populate_2d_int_array(result, h, w);

return (result);
}

/**
 * populate_2d_int_array - populates an array with zeros.
 * @arr: array to be populated.
 * @h: height of array.
 * @w: width of array.
 */
void populate_2d_int_array(int **arr, int h, int w)
{
	int i, j;

	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			*(*(arr + i) + j) = 0;
}
