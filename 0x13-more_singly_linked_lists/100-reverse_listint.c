#include "lists.h"

/**
  * reverse_listint-Reverses a linked list
  * @head: Pointer to the head pointer
  *
  * Return: Pointer to new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	(*head) = prev;
	return (*head);
}
