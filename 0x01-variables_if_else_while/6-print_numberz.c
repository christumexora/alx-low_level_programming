#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function to print all numbers of base 10 from 0 without char datatype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int baseTen;

	for (baseTen = 0; baseTen <= 9; baseTen++)
		putchar((baseTen % 10) + '0');

	putchar('\n');

	return (0);
}
