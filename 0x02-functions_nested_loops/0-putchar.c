#include "main.h"
/**
 * main - prints out text
 *
 * Return: 0 always
 */
int main(void)
{
	char text[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar("\n");
	return (0);
}
