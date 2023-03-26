#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  main - Entry point
 *
 *  Description: 'this programme genrate a random number,
 *  and tell us if nigative or positive or zero'
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
