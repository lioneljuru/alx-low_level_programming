#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabets in their order
 *
 * Return: 0 always
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		alp = tolower(alp);
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
