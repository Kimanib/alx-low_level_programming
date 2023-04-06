#include "main.h"

/**
 * factorial - returns the factroial of a num
 * @n: is a number
 * Return: facrorial of numbers
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
