#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: dog_t struct
 */
void free_dog(dog_t *d)
{
	free(d);
}
