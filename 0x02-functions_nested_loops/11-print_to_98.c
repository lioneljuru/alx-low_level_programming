#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers up to 98
 *
 * @n: stsrting number
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while(n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			print("%d, ", n++);
		printf("%d\n", n);
	}
}
