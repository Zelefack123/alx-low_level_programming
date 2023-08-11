#include <stdio.h>
/**
 * main -the first thing
 * Return: its 0
*/
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar('\n');
}
