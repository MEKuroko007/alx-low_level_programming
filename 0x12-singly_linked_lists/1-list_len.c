#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	
	while (h)
	{
		n++;
		h->next;
	}
	return (n);
}
