#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	/* Find the length of the destination string */
	while (*(dest + dest_len))
		dest_len++;

	/* Append the source string to the destination string */
	for (i = 0; *(src + i); i++)
		*(dest + dest_len + i) = *(src + i);

	/* Null terminate the new destination string */
	*(dest + dest_len + i) = '\0';

	return (dest);
}
