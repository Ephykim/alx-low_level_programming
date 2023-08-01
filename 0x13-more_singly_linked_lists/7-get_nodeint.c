#include "lists.h"

/**
  * get_nodeint_at_index-gets the nth node of a linked list
  * @head: Pointer to the head
  * @index: Desired index
  *
  * Return: Pointer to the index node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur_node;
	size_t count;

	count = 0;
	cur_node = head;
	while (cur_node != NULL)
	{
		if (count == index)
		{
			return (cur_node);
		}
		cur_node = cur_node->next;
		count++;
	}
	return (NULL);
}
