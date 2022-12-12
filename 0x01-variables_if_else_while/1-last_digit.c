#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - annoying
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d", n, x);
	if (x > 5)
	{
		printf("And is greater than 5");
	}
	if (0 ==)
	{
		printf("And is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("And is less than 6 andnot 0");
	}
	printf("\n");
	return (0);
}
