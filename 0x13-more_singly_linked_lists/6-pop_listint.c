#include "lists.h"

/**
  * pop_listint-Deletes the first node
  * @head:Pointer to the headnode
  *
  * Return: Data of the deleted node
  */
int pop_listint(listint_t **head)
{
	listint_t *curr_head, *newHead;
	int data = 0;

	curr_head = *head;
	if (curr_head != NULL)
	{
		data = curr_head->n;
		newHead = curr_head->next;
		free(curr_head);
	}
	*head = newHead;
	return (data);
}
