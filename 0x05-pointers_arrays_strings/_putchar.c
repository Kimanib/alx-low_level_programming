#include <unistd.h>

/*
 * _putchar - writes rhe character c to stdout
 * Retrun on succesd 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
