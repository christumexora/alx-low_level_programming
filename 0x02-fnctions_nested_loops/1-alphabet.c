#include"main".h
/**
 * print_alphabet - check the code
 *
 * Return:Always 0
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	putchar('\n');
}
