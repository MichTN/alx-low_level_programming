#include "main.h"
#include <stdio.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: input pointer to char type
 * represents the pointer to the block of memory to fill
 * @b: input variable of char type
 * represents the character to fill s
 * @n: unsigned int variable
 * the number of bytes to be filled
 * Return: a pointer to the filled memory @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
