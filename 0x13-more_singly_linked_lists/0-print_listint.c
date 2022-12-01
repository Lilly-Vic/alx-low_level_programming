#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *count = h;
	size_t num_of_nodes = 0;

	while (count != NULL)
	{
		printf("%d\n", count->n);
		num_of_nodes += 1;
		count = count->next;
	}

	return (num_of_nodes);
}
