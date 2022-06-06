#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all alphabets except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabt;
	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
		if (alphabt != 'e' && alphabt != 'q')
			putchar(alphabt);
	
	putchar('\n');

	return (0);
}
