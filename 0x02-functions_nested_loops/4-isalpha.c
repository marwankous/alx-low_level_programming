#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabetic character
 * @c: the character to check
 *
 * Return: 1 if the character is an alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
