#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @str: Character to print
 *
 * Return: 1 on success
 * on error, return -1
 */

int _putchar(char str)
{
	return (write(1, &str, 1));
}
