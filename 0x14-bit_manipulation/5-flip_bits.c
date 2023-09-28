#include "main.h"

/**
 * flip_bits - get the number of bits to flip for getting to m from n
 * @n: starting number
 * @m: destination
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = n ^ m;
	int count = 0;

	while (flips)
	{
		if (flips & 1)
			count++;
		flips >>= 1;
	}
	return (count);
}
