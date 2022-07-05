#include "main.h"

/**
*_isalpha - check if the character is lower
*@c: a character to be checked on
*Return: 1 and 0 depending on condition
*/



int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
