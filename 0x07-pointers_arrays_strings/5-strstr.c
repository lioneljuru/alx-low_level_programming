#include "main.h"
/**
 * _strstr - finds the first occurence of the substring neddle
 * in the string haystack
 * @haystack: string to search
 * @needle: string whose occurence is searched
 *
 * Return: pointer to ti the begining of the located substring
 */
char *_strstr(char *haystack, char *neddle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (neddle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
