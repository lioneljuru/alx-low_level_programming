#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int alp;

	while (count++ <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
	}
	_putchar("\n");
}
