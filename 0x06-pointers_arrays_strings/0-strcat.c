#include "main.h"
#include <string.h>

/**
 * char *_strcat - main function to concatenate 2 string
 *
 * @dest: destination variable
 * @src: source variable
 *
 * Return: To return a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (new);
}
