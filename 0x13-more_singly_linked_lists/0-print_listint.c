#include "lists.h"
/**
 * print_listint - print data of nodes
 * @h:pointer to struct node
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint *temp;
	unsigned int count = 0;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
