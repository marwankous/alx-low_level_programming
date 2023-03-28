#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	/* find length of string */
	while (str[len] != '\0')
		len++;

	/* print every other character */
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
