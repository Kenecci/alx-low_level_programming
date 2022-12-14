#include <stdio.h>
#include "main.h"

/**
 *  main - print first 98 Fibonacci numbers without using long long, malloc,
 *
 *  * pointers, array/tables, or structures
 *
 *  * Return: 0
 */

int main(void)
{
	int i = 0;
	long j = i, k = 2;

	while(i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
