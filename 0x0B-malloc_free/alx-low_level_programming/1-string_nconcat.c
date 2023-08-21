#include "main.h"
/**
 * string_nconcat - concatenates 2 strings using inputed number of byte
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to concatenate
 * Return: NULL for failure, 
 * pointer to the concatenated string Otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));
	if (concat ==NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (indec = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';
	return (concat);
}

