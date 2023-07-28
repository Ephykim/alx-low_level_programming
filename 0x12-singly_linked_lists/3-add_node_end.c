#include "lists.h"

/**
  * add_node_end-Adds a node at the end of a list
  * @head: pointer to the head pointer
  * @str: Pointer to a string
  *
  * Return: New node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr_node;

	new_node = calloc(1, sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Memory Allocation Failed !!\n");
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		curr_node = *head;
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new_node;
		return (curr_node);
	}
}
