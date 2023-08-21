#include "main.h"
/**
 * _putchar - writes the character to stdout
 * @s: used to reference
 * Return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
