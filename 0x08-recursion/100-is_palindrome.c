#include "main.h"
/**
 * is_palindrome - returns true if the given string is palindrome
 * @s: string to check
 *
 * Return: true if the given string is palindrome
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - prints the length of the string
 * @s: string to measure
 *
 * Return: length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks if a string is palindrome
 * @s: string to check
 * @len: length of the string
 * @index: index of the string to check
 *
 * Return: 1 for success, 0 otherwise
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
