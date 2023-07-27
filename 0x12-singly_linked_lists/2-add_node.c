#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: string
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int i  = 0;

	for (; str[i]; i++)
		;

	add = malloc(sizeof(list_t));

	if (!add)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = add;

	return (*head);
}
