#include "main.h"

/**
 * _memcpy - copies that will recieve the copied data
 *
 * @dest: point that will recieve the copied data
 * @src: pointer that has the information to be copied
 * @n: amount of times the src information will be coppied to dest
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

