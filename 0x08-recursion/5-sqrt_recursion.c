#include "main.h"

/**
 * check - for square root
 * @i : integer
 * @j : integer
 * Return: integer
 */

int check(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}

/**
 * _sqrt_recursion - returns the value of the square root of a number
 * @n : integer
 * Return: value of natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
