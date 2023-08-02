#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev, *next;
	size_t count = 0;

	prev = next = head;
	while (prev && next && next->next)
	{
		prev = prev->next;
		next = next->next->next;
		if (prev == next)
			exit(98);
		printf("[%p] %d\n", (void *)prev, prev->n);
		count++;
	}

	if (prev)
	{
		printf("[%p] %d\n", (void *)prev, prev->n);
		count++;
	}

	return (count);
}
