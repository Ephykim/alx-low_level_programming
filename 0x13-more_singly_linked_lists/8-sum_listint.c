#include "lists.h"

/**
  * sum_listint-sums all the data in a linked list
  * @head: Pointer to headnode
  *
  * Return: Sum
  */
int sum_listint(listint_t *head)
{
	listint_t *cur_node;
	int sum;

	sum = 0;
	cur_node = head;
	while (cur_node != NULL)
	{
		sum += cur_node->n;
		cur_node = cur_node->next;
	}
	return (sum);
}
