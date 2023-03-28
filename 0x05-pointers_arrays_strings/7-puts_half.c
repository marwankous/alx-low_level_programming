#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * If the number of characters is odd, prints the last (n + 1) / 2 characters
 * @str: pointer to a string
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	/* find length of string */
	while (str[len] != '\0')
		len++;

	/* print second half of string */
	for (i = (len + 1) / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
