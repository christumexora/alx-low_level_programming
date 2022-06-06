#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabets in reverse from z to a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tebahpla;

	for (tebahpla = 'z'; tebahpla >= 'a'; tebahpla--)
		putchar(tebahpla);

	putchar('\n');

	return (0);
}
