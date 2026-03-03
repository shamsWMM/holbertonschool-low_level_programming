#include <stdlib.h>

void populate_2d_int_array(int **arr, h, w);

/**
 * alloc_grid - allocated a pointer to a w by h array.
 * @row: height of array.
 * @col: width of array.
 *
 * Return: a pointer to 2d int array.
 */
int **alloc_grid(int row, int col)
{
int **result, i = 0;

if (w <= 0 || h <= 0)
	return (NULL);

result = malloc(col * sizeof(*result));
for (i = 0; i < col; i++)
	result[i] = malloc(row * sizeof(*(result[col]);

populate_2d_int_array(result);

return (result);
}

/**
 * populate_2d_int_array - populates an array with zeros.
 * @arr: array to be populated.
 * @h: height of array.
 * @w: width of array.
 */
void populate_2d_int_array(int **arr, h, w)
{
	int i, j;

	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			*(*(arr + i) + j) = 0;
}
