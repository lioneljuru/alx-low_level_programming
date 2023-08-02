#include "main.h"

/**
 * _pow_recursion - prints value of a number raised tothe power of another
 * @x: base
 * @y: exponent
 * 
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (0);
	return (_pow_recursion(x, (y - 1)) * x);
}
