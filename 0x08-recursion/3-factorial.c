#include "main.h"

/**
 * factorial - search for the factorial of a number
 * @n: the number to find the factorial of
 *
 * Return: factorial
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}