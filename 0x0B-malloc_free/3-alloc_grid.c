#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)

{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	{	for (; i < height; i++)
		{
			array[i] = (int *)malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < height; j++)
					array[i][j] = 0;
			}
			else
			{	while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}	
		}	
		return (array);
	}
	else
	{
		return (NULL);
	}
}
