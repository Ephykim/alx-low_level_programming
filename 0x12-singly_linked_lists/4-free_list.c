#include "lists.h"

/**
  * free_list-Frees all allocated memory
  * @head: Pointer to struct
  *
  * Return: Void
  */

void free_list(list_t *head)
{
	list_t *curr_node, *next_node;

	curr_node = head;
	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = next_node;
	}
}
