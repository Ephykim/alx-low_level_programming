#include "lists.h"

/**
  * listint_len-prints all the elements of a listint_t list
  * @h: pointer to a struct
  *
  * Return: Count
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t count;

	current = h;
	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
