#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all digits of base ten
 *
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
