#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned in
 * @b: the binary to convert
 *
 * Return: the converted value, or 0 if there is unconvertable char
 */
unsigned  int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0, bas - 1;

	if (!check_valid_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;
	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (decimal);
}

/**
 * check_bin_string - checks if a string is binary
 * @b: string to check
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
