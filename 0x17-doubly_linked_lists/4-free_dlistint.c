#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free_dlistint(head->next);
	free(head);
}
