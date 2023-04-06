#include "main.h"

/**
 * flip_bits - counts the number of bits needed o be flipped
 * @n: number
 * @m: number to flip m to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, bits = 0;

	while (a > 0)
	{
		bits += a & 1;
		a >>= 1;
	}
	return (bits);
}
