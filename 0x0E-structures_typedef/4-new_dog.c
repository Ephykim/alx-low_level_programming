#include <stdlib.h>
#include "dog.h"

/**
  * new_dog- creates a new dog.
  * @name: Dog's name
  * @age: Dog's Age
  * @owner: Dog's Owner's name
  *
  * Return: POinter to a struct
  */

dog_t *new_dog(char *name, float  age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
