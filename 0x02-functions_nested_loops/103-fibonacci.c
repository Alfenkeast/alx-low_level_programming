#include "main.h"
#include <stdio.h>

/**
* main - prints first 98 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 3;

	printf("1, 2, ")
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%lu', c);
		a = b;
		b = c;

		if (i < 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
