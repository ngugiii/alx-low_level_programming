#include "main.h"
/**
 * get_bit - gets value of bit at index
 * @n: The bit
 * @index: index to go through
 * Return: integer value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1);
}
