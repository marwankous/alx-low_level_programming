#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes of src.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	/* Find the length of the destination string */
	while (*(dest + dest_len))
		dest_len++;

	/* Append the source string to the destination string */
	for (i = 0; i < n && *(src + i); i++)
		*(dest + dest_len + i) = *(src + i);

	/* Null terminate the new destination string */
	*(dest + dest_len + i) = '\0';

return (dest);
}
