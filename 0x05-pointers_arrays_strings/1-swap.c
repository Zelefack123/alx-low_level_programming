#include "main.h"
/**
 * swap_int - take in two numbers swaps them
 * @a:takes the value of b
 * @b:takes the balue of b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
