#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints the name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NUL || f == NUL)
		return;
	f(name);
}
