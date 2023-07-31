#include "lists.h"
/**
 * listint_len - print length of a linked list
 * @h:pointer to head
 * Return:length
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
