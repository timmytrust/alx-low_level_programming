#include "main.h"

/**
*Print_alphabet - prints alphabets in lowercase
*
*Description: 'a function that prints the alphabet, in lowercase, followed by a new line.'
*
*/

void print_alphabet(void)
{

	int j;

	for (j = 'a'; j <= 'z'; j++)
	{

		_putchar(j);

	}

	_putchar('\n');
}
