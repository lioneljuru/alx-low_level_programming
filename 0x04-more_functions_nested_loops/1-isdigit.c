#include "main.h"
/**
 * _isdigit - checks for digits
 * @i: the number to check
 *
 * Return: 1 for success, 0 otherwise
 */
int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}
