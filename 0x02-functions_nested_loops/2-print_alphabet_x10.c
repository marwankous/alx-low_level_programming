#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase
 * alphabet 10 times followed by a new line
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a'; /* reset to 'a' for next iteration */
		count++;
	}
	_putchar('\n');
}
