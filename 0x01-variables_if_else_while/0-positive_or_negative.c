#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d The number is positive -", n);
	}
	else if (n == 0)
	{
		printf("%d the number is zero -", n);
	}
	else
	{
		printf("%d, the number is negative", n);
	}

	return (0);
}

