#include <stdio.h>
/**
 * main - entry point
 *
 * return: always (0)
 */

int main(void)
{
	int i;
/* creating nested loop */

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
