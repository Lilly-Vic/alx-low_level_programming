#include "main.h"

/**
 * _grid_free - frees a 2 dimensional array.
 * @grid:memory block to be freed
 * @height:height of the array
 * Return:returns void
 */

void _grid_free(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a stirng into words
 * @str: string to be splitted
 * Return: pointer to the array of splitted words
 */

char **strtow(char *str)
{
	char **split;
	unsigned int s, height, i, j, words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (s = height = 0; str[s] != '\0'; s++)
	{
		if (str[s] != ' ' && (str[s + 1] == ' ' || str[s + 1] == '\0'))
			height++;
	}
	split = malloc(sizeof(char *) * (height + 1));
	if (split == NULL || height == 0)
	{
		free(split);
		return (NULL);
	}
	for (i = words = 0; i < height; i++)
	{
		for (s = words; str[s] != '\0'; s++)
		{
			if (str[s] == ' ')
				words++;
			if (str[s] != ' ' && (str[s + 1] == ' ' || str[s + 1] == '\0'))
			{
				split[i] = malloc(sizeof(char) * (s - words + 2));
				if (split[i] == NULL)
				{
					_grid_free(split, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; words <= s; words++, j++)
			split[i][j] = str[words];
		split[i][j] = '\0';
	}
	split[i] = NULL;
	return (split);
}
