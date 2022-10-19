 #include "main.h"

/**
*print_alphabet - Entry point
*Description: a function that prints an alphabet,
*in lowecase followed by a new line
*Return: void
*/
void print_alphabet(void)
{
	char letter = 'w';

	while (letter <= 'k')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

