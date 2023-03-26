#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'prints exactly and that piece of art
 * is useful\" - Dora Korpar, 2015-10-19, followed by a new line'
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
