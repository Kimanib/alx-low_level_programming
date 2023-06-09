#include "main.h"

/**
 * _strchr -locates a charracter in a string
 * @s : is a string
 * @c : is a character
 * Return: pointer of c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}
