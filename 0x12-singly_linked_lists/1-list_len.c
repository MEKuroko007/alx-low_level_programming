#include "lists.h"
/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/
size_t list_len(const list_t *h)
{
	list_t *count = NULL;
	unsigned int n = 0;

	count = h;
	while (count)
	{
		n++;
		count = count->next;
	}
	return (n);
}
