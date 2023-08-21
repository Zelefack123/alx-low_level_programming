#include "main.h"
/**
 * *_strcpy - cops
 * @dest: see
 * @src: type
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
