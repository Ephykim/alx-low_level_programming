#include "lists.h"

/**
  * add_node-Creates a new node
  * @head:Pointer to the head pointer
  * @str:pointer to a string
  *
  * Return: new node
  */
list_t *add_node(list_t **head, const char *str)
{
	 list_t *new_node;

	new_node = calloc(1, sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Memory Allocation Failed !!\n");
		exit(-1);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
