#include "main.h"

/**
 * __memset - fills memory with a constant byte n amount of times
 *
 * @s: pointer that has the address of the memory to fill
 * @b: constant bytes that will be witten into the memory
 * @n: amount of times the byte will written into memory
 *
 * Return: address of the memory where the byte was written
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
