#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	int la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putint(la);
	}

	putint('\n');

	return (0);
