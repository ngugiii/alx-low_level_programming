#include "main.h"
#include "2-get_bit.c"

/**
 * clear_bit - sets the value of bit at a given index to 0
 * @n: pointer to the bit
 * @index: index to set the value
 * Return: return 1 if no error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
