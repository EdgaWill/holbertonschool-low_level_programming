#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer
 * @index: index
 *
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index > 0 && head != NULL)
		return (get_dnodeint_at_index(head->next, index - 1));
	return (head ? head : NULL);
}
