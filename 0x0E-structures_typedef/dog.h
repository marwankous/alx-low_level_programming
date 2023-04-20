#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Information about dog
 * @name: Dog's name
 * @owner: Dog's owner name
 * @age: Age of dog
 *
 * Description: this struct contains information about the dog,
 *  its age and its owner name
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
