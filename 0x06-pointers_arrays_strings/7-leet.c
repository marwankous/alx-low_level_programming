#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}

	return (str);
}
