#include "lists.h"

/**
  * add_node_end-Adds a node at the end of the linked list
  * @head: pointer to the head pointer
  * @str: Pointer to a string
  *
  * Return: New node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *new_node;

	if (*head == NULL)
	{
		new_node = calloc(1, sizeof(list_t));
		if (new_node == NULL)
		{
			printf("Memory Allocation Failed !!\n");
			exit(-1);
		}
		else
		{
			new_node->str = strdup(str);
			new_node->len = strlen(str);
			new_node->next = NULL;
			*head = new_node;
		}
	}
	current = *head;
	while (current->next !=  NULL)
	{
		current = current->next;
	}
	new_node = calloc(1, sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	current->next = new_node;
	return (new_node);
}
