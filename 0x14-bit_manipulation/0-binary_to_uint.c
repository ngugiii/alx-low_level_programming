#include "main.h"

/**
 * binary_to_uint - converts a binary digit to an unsigned integer
 * @b: a ponter to a string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i <<= 1;
		else
			return (0);
		b++;
	}
	return (i);
}
