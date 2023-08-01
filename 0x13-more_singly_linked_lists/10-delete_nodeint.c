#include "lists.h"

/**
  *delete_nodeint_at_index-Deletes a node at n index
  * @head: Pointer to head pointer
  * @index: The index
  *
  * Return: 1 otherwise -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	size_t count;

	count = 0;
	previous = *head;
	current = *head;
	if (current == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while ((current != NULL) && (count < index))
		{
			previous = current;
			current = current->next;
			count++;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	return (-1);
}
