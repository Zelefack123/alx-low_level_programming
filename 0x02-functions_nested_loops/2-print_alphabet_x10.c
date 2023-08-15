#include <stdio.h>
/**
 * main - thid
 * Return: this

 * print_alphabet_x10 - prints the alphabet
 */

void print_alphabet_x10(void)
{
char i;
int n;
for (i = 1 ; i <= 10; i++)
{
for (n = 'a' ; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');
}
