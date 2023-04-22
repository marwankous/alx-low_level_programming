#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments (should be 2)
 * @argv: an array of strings containing the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Print the opcodes */
	unsigned char *p = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(p + i));
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
