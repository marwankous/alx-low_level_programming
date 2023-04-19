#include "dog.h"
#include "stddef.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: string containing the name of the dog
 * @age: age of the dog
 * @owner: string containing the name of the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
