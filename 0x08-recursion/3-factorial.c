#include "main.h"
/**
 * factorial - -gives factorial of a number
 * @n: number to use
 * Return: return factor or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
