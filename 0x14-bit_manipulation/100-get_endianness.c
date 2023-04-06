#include "main.h"

/**
 * get_endianness - checks edianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int num = 1;
	char *a = (char *)&num;

	if (*a == 1)
		return (1);

	return (0);
}
