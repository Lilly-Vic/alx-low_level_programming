#include "main.h"

/**
 * _calloc - allocate memory using malloc
 * @nmemb: number of elements
 * @size: size of memory to be allocated
 * Return: poiner to the address of memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			a[i] = 0;
		return (a);
	}
	else
		return (NULL);
}
