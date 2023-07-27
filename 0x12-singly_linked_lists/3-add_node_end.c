#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t temp = (*head);
	unsigned int i = 0;

	for (; str[i]; i++)
		;
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	/**
	 * this node will be the last node
	 * the previous task we created first node
	 * and passed next node to the head (*head) = add
	 */
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
