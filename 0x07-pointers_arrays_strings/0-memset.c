#include "main.h"

/**
 *_memset - fill a block of memory with empty value
 *Description: 'the program's descriptio
 *@s: starting address of memory to be filled
 *@b: The derived value
 *@n: number of the bytes to be changed
 *Return: changed away value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
