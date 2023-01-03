#include "main.h"

/** _memset - fill a block of  memeory with a specific value
 * @s: starting address to be filled
 * @b: the desired value
 * @n: number of byted to be changed
 *
 * Return: changed array with new value for n bytews
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (: n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
