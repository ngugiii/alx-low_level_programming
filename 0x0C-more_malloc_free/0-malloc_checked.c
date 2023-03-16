#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
