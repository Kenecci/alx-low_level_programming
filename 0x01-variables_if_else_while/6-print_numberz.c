#include <stdio.h>

/**
 *  main - print 0123456789 using putchar
 *
 *   *Return: Always 0 (Success)
 */

int main(void)
{

	int num;

	for (num = 0; num < 10; num++)
	{
	putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
