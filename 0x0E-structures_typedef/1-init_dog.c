#include "dog.h"

/**
  * init_dog-Initializes a dog  variable of type struct
  * @d: Address of the variable
  * @name: The dog's name
  * @age: THe dog's age
  * @owner: THe name of the dog's owner
  *
  * Return: Void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
