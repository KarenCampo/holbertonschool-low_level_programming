#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
 * alloc_grid - return a pointer to a 2D array.
 * @width: Widthvariable
 * @height: Heihgt variable
 * Return: 0 on success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
