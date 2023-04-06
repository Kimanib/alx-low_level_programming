#include "main.h"

/**
 *_pow_recursion - returns the value ofx to exponential y
 * @x : integer
 * @y : integer
 * Return : value of x exponential y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
