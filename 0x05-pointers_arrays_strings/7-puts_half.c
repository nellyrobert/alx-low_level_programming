#include "main.h"
#include <string.h>

/**
 * puts_half - print from half
 * @str: variable
 */

void puts_half(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}

	len = (i + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
