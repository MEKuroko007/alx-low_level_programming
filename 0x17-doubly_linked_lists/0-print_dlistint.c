#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @head: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t nodes = 0;

	if (!head)
		return (0);

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
