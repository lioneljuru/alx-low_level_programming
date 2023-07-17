#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	int alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
