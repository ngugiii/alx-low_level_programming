#include "main.h"
/**
 * length - helps to do
 * @s: string
 * Return: string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * helper2 - helps agin
 * @i: integer i
 * @s: string
 * Return: int value
 */
int helper2(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (helper2(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - to find if it is a palindrome
 * @s: string to check
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper2(i, s));
}
