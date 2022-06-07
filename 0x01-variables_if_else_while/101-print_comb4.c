#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all different combination of three digits with the list no.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int degit1, degit2, degit3;

	for (degit1 = 0; degit1 <= 9; degit1++)
	{
		for (degit2 = degit1 + 1; degit2 <= 9; degit2++)

		{

			for (degit3 = degit2 + 1; degit3 <= 9; degit3++)
			{
				putchar((degit1 % 10) + '0');
					putchar((degit2 % 10) + '0');
					putchar((degit3 % 10) + '0');

				if (degit1 == 7 && degit2 == 8 && degit3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
