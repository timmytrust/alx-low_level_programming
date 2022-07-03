#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Write a program that prints the alphabet in lowercase, and then in uppercase
*followed by a new line.
*Return: Always 0 (Success)
*/

int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{

			putchar(ch);

		}

	}
	putchar(10);
	return (0);
}
