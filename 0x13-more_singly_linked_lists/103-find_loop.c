#include "lists.h"

/**
  * find_listint_loop-finds the loop in a linked list
  * @head: POinter to the head pointer
  *
  * Return: address of the node where the loop starts
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Naruto;
	listint_t *Sauske;

	if (head == NULL || head->next == NULL)
		return (NULL);
	Naruto = Sauske = head;
	while (Sauske != NULL && Sauske->next != NULL)
	{
		Naruto = Naruto->next;
		Sauske = Sauske->next->next;
		if (Naruto == Sauske)
		{
			Naruto = head;
			while (Naruto != Sauske)
			{
				Naruto = Naruto->next;
				Sauske = Sauske->next;
			}
			return (Naruto);
		}
	}
	return (NULL);
}
