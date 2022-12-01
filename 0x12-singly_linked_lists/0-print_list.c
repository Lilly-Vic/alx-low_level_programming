#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h:pointer to the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *count = h;
	size_t num_of_nodes = 0;

	while (count != NULL)
	{
		if (count->str != NULL)
			printf("[%d] %s\n", count->len, count->str);
		else
			printf("[0] (nil)\n");
		num_of_nodes += 1;
		count = count->next;
	}

	return (num_of_nodes);
}
