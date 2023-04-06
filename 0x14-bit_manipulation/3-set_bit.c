#include "main.h"
#include "2-get_bit.c"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the bit
 * @index: index to set the value
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
