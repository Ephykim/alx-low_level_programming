#include "lists.h"

/**
  * add_nodeint_end-Adds a node at the end of the list
  * @head: Pointer to the head pointer
  * @n:Data value
  *
  * Return: Pointer to the new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	return (newNode);
}
