#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: double pointer
 * @n: node
 *
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *dadito = malloc(sizeof(dlistint_t));

	if (!dadito)
		return (NULL);
	if (*head)
		(*head)->prev = dadito;
	dadito->n = n;
	dadito->next = *head;
	dadito->prev = NULL;

	*head = dadito;
	return (dadito);
}
