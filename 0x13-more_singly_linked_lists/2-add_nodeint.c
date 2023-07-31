#include "lists.h"

/**
  * add_nodeint-Creates a new node
  * @head: Pointer to a pointer
  * @n: Data value
  *
  * Return: Pointer to new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
