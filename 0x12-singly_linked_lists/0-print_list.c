#include "lists.h"
#include <stdio.h>
/**
 * print_list - function print linked list
 * @h:struct of single linked list
 * Return:count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (ptr != NULL)
	{
		if (h->str)
			printf("[0] (nil|)");
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr->next;
		count++;
	}
	return (count);
}
