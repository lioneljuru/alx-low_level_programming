#include "main.h"
/**
 * _strncat - concatenates strings but adds a specific number of bytes
 * @dest: destination
 * @src: source
 * n: number of bytes to add
 *
 * Return: a new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (desr[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		desr[dest_len++] = src[index];
	return (dest);
}
