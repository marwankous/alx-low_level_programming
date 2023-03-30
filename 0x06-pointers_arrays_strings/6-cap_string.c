#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @str: The input string to be capitalized.
 *
 * Return: A pointer to the resulting string.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr)
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1;
		}
		else if (cap_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= ('a' - 'A');
			cap_next = 0;
		}
		else
		{
			cap_next = 0;
		}
		ptr++;
	}

	return (str);
}
