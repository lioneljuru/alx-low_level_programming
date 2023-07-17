#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets except q and e
 *
 * Return: 0 always
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'q' || alp == 'e')
		{
			continue;
		}
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
