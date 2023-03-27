#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function to reverse char array
 *
 * @s: pointing to the string
 */

void rev_string(char *s)
{
	int i;
	int b = 0;
	int c;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	i--;

	while (i > b)
	{
		c = s[i];
		s[i] = s[b];
		s[b] = c;
		b++;
		i--;
	}
}
