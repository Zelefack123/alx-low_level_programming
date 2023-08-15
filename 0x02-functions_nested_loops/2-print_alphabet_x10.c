#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	i = 0;

	while (i < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(i);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
