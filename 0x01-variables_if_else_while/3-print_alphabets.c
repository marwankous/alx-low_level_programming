#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line'
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'z');
	letter = 'A';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'Z');
	putchar('\n');

	return (0);
}
