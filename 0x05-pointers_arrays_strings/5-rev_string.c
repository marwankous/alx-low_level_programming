#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	/* find length of string */
	while (s[len] != '\0')
		len++;

	/* swap characters from beginning and end until middle */
	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
