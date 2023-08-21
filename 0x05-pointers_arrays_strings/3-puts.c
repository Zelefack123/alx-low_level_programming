#include "main.h"
/**
 * _puts - fuction that prints a string
 * @str:pointer to the string
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
