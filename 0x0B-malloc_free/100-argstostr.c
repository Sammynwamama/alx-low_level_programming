#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: An input pointer of the string to split
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */

char *argstostr(int ac, char **av)
{

	int i, n, k = 0, night = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			night++;
	}
	night += ac;
	
	str = malloc(sizeof(char) * night + 1);
	
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k] = av[i][n];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
