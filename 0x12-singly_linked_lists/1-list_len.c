#include "lists.h"

/**
  * list_len-finds the number of elements in a linked list_t list.
  * @h: Pointer to struct
  *
  * Return: Count
  */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *curr_node;

	if (h == NULL)
	{
		return (0);
		exit(-1);
	}
	count = 0;
	curr_node = h;
	while (curr_node != NULL)
	{
		count++;
		curr_node = curr_node->next;
	}
	return (count);
}
