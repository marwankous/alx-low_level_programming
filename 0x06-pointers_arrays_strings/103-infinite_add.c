#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result can't be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len = len1 > len2 ? len1 : len2;
	int carry = 0;
	int i, j, k;

	if (len + 1 > size_r)
	{
		return (0);
	}

	r[len + 1] = '\0';

	for (i = len1 - 1, j = len2 - 1, k = len; k > 0; i--, j--, k--)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}

	if (carry)
	{
		if (len + 2 > size_r)
		{
			return (0);
		}
		r[0] = carry + '0';
		return (r);
	}

	return (r + 1);
}
