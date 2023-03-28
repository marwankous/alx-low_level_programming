#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum, diff, n;
	char c;

	srand(time(NULL));

	sum = 0;
	i = 0;
	while (sum < 2772 - 122)
	{
		n = rand() % 62;
		if (n < 26)
			c = 'a' + n;
		else if (n < 52)
			c = 'A' + (n - 26);
		else
			c = '0' + (n - 52);

		sum += c;
		putchar(c);
		i++;
	}

	diff = 2772 - sum;
	if (diff < 26)
		c = 'a' + diff;
	else if (diff < 52)
		c = 'A' + (diff - 26);
	else
		c = '0' + (diff - 52);

	putchar(c);
	i++;

	while (i < 63)
	{
		if (i % 2 == 0)
			putchar('A' + (rand() % 26));
		else
			putchar('a' + (rand() % 26));
			i++;
	}

	putchar('\n');

	return (0);
}
