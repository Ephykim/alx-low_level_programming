#include "lists.h"

/**
  * free_listint_safe- frees a listint_t list.
  * @h: pointer to head pointer
  *
  * Return: size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	cur = *h;
	while (cur)
	{
		count++;
		temp = cur;
		cur = cur->next;
		free(temp);
		if (cur == *h)
			exit(98);
	}
	*h = NULL;
	return (count);
}
