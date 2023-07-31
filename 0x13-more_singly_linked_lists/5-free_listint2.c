#include "lists.h"

/**
  * free_listint2-frees a listint_t list
  * @head: Pointer to the firsr node
  *
  * Return: Void
  */
void free_listint2(listint_t **head)
{
	listint_t *current, *nextNode;

	current = *head;
	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
	*head = NULL;
}
