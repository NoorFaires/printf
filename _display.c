#include <unistd.h>

/**
 * _display - write the character c
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _display(char c)
{
	return (write(1, &c, 1));
}
