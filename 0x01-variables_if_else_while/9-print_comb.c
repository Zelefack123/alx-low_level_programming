#include <stdio.h>
/**
 * main - happy
 * Return: see
 */
int main(void)
{
int j;
for (j = 0; j <= 9; j++)
{
if (j == 9)
putchar(j + '0');
else
{
putchar(j + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
