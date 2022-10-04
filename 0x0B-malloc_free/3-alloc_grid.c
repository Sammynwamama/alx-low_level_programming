#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **night;
	int i, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	night = malloc(height * sizeof(int *));
	/* if night is equal to Null return Null*/
	if (night == NULL)
		return (NULL);
	/*for every i thats 0 and less than height increase i*/
	for (i = 0; i < height; i++)
	{
		/*size of night[i] using malloc*/
		night[i] = malloc(width * sizeof(int));
		/*check if night[i] is equal to Null*/
		if (night[i] == NULL)
		{
			while (i >= 0)
				/*free night[i]*/
				free(night[i--]);
			/* Free night*/
			free(night);
			return (NULL);
		}
			/*for every a that is less than width increase a*/
			for (a = 0; a < width; a++)
				night[i][a] = 0;
	}
	return (night);
}
