#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program that prints the alphabet in lowercase,
 * followed by a new line'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');
	return (0);
}
