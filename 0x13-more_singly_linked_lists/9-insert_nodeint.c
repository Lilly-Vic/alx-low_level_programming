#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current_node, *new_node;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		current_node = *head;
		for (; count < idx - 1 && current_node != NULL; count++)
			current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
	}
	
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (NULL);
}
