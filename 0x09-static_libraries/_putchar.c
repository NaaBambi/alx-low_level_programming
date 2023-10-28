#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout.
 *
 * @c: The character to be written.
 *
 * Return: On success, the character is written.
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
