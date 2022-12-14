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
			prinf("%d", j);
		else if (i == 1)
			printf(", %d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %d", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
