#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: charachter to check
 *
 * Return: 1 if character is a letter,0 otherwise
 */
int _islapha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}
