#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	b = a;

	for (i = 0; i < nmemb * size; i++)
		b[i] = 0;

	return (a);
}
