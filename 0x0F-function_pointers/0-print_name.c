#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: A pointer to a string containing a name
 * @f: A pointer to a function that takes a
 * char * as an argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
