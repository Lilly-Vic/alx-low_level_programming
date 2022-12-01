#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: the head of list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *cursor = *h;
	size_t n = 0;
	int index;

	while (cursor)
	{
		index = cursor - cursor->next;
		if (index > 0)
		{
			tmp = cursor->next;
			free(cursor);
			cursor = tmp;
			n++;
		}
		else
		{
			free(cursor);
			*h = NULL;
			n++;
			break;
		}
	}
	*h = NULL;

	return (n);
}
