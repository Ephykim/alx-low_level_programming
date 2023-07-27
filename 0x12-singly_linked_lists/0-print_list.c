#include "lists.h"

/**
  * print_list-Calculates the number of elements in a linked list
  * @h: pointer to a struct
  *
  * Return: number of elements in a linked list_t list.
  */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *curr_node;

	if (h == NULL)
		return (0);
	i = 0;
	curr_node = h;
	while (curr_node != NULL)
	{
		if (curr_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", curr_node->len, curr_node->str);
		}

		i++;
		curr_node = curr_node->next;
	}
	return (i);
}
