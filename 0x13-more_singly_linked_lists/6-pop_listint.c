#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 * Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int del_content;

	if (*head == NULL)
		return (0);

	pop = *head;
	*head = (*head)->next;
	del_content = pop->n;
	free(pop);

	return (del_content);
}
