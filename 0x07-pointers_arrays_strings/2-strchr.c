#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurence of 'c' in the str
 * @s: the string
 * @c: character to find
 *
 * Return: pointer to the first occurence of c
 */
char *_strchr(char * s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
