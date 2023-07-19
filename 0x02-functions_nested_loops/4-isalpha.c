#include "main.h"
/**
 * _isalpha - sees if a character is an alphabet
 * @c: the alphabet
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
