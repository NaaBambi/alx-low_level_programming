#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to fill
 * @b: The byte to fill the memory area with.
 * @n: The number of bytes to fill.
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
