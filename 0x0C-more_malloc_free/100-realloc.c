#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of ptr
 * @new_size: size of the new memory to be allocated
 * Return: pointer to new allocated memory
 * NULL, if @ptr is NULL (FAILURE) or
 * NULL, if @new_size == 0 && @ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		p = malloc(new_size);
		if (p != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)p + i) = *((char *) ptr + i);
			free(ptr);
			return (p);
		}
		else
			return (NULL);
	}
}
