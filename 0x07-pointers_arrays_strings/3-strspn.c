#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: is a string
 * @accept: variable for bytes
 * Return: number of byted in the initial segment of s (byted from accept)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
		for (j = 0; accept[j] != s[i] ; j++)
			if (accept[j] == '\0')
				return (i);
	return (i);
}
