#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * int main - combination of numbers separated by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int degit;

	for (degit = 0; degit <= 9; degit++)
	{
		putchar((degit % 10) + '0');

	if (degit == 9)
		continue;
	putchar(',');
		putchar(' ');
	}

	putchar('\n');

		return (0);
}
