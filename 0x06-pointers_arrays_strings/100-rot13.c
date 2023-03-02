#include "main.h"
/**
 * rot13 - encodes
 * @s: string to encrypt
 * Return: returns char value
 */
char *rot13(char *s)
{
	char section1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char section2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; section1[j] != '\0'; j++)
		{
			if (s[i] == section1[j])
			{
				s[i] = section2[j];
				break;
			}
		}
	}
	return (s);
}
