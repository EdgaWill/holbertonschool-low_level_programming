#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list
 * @head: double pointer
 * @n: member for new node
 *
 * Return: dadito
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dadito = NULL, *tmp = NULL;

	dadito = malloc(sizeof(dlistint_t));
	if (!dadito)
		return (NULL);
	dadito->n = n;
	if (*head)
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		dadito->prev = tmp;
		dadito->next = NULL;
		tmp->next = dadito;
	}
	else
	{
		dadito->next = *head;
		dadito->prev = NULL;
		*head = dadito;
	}
	return (dadito);
}
