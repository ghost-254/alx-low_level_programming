#include "main.h"

/**
 * print_alphabet - print alphabets
 * Return: void
 */

void print_alphabet(void)
{
	int count = 0;
	char i;

	while (count++ <= 9)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
