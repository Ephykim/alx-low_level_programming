#include "lists.h"

/**
  * insert_nodeint_at_index-Inserts a node at a given index
  * @head: Pointer to the head pointer
  * @idx: The Index
  * @n: Data of the new node
  *
  * Return: pointer to the new node;
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *cur_Node;
	size_t index;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	index = 0;
	cur_Node = *head;
	if (cur_Node == NULL)
		add_nodeint_end(&cur_Node, n);
	while (cur_Node != NULL)
	{
		if (index == (idx - 1))
		{
			newNode->next = cur_Node->next;
			cur_Node->next = newNode;
			return (newNode);
		}
		cur_Node = cur_Node->next;
		index++;
	}
	return (NULL);
}
