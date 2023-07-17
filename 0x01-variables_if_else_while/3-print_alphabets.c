#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabet letters in all cases
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
		if (alp == 'z')
		{
			alp = 'A';
			for (; alp <= 'Z'; alp++)
			{
				putchar(alp);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
