#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: 0 for failure, last for success
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		return (0);
	else
		return (last);
}
