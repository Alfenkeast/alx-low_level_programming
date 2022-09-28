#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_print_rev_recursion(s + l);
		putchar(*s);
	}
}
