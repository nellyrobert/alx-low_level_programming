#include "main.h"

/**
 * _memset - filling the memory with constant bytes
 * @a: a pointer to the memory
 * @b: for replace
 * @c: number of  bytes to be replaced
 * Description: fills memory s with byte b for n bytes
 * Return: the pointer @s to memory
 **/

char *_memset(char *a, char b, unsigned int c)
{
	for (; c > 0; c--)
	{
		a[c - 1] = b;
	}

	return (a);
}
