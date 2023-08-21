#include "main.h"
/**
 * _strpbrk - locates the first occurence of any bytes in accept, in s
 * @s: string to search
 * @accept: string whose bytes are being located
 *
 * Return: pointer to the matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
