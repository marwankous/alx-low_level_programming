#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints all the numbers of base 16 in lowercase,
 *  followed by a new line'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
