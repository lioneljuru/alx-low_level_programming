#include "main.h"

/**
 * print_alphabet - prints out alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar("\n");
}
