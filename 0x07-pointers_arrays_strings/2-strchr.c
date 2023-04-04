#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @src: source
 * @charact: what to search for
 * Description: searches string for character, returns pointer to char
 * Return: pointer to char
 **/

char *_strchr(char *src, char charact)
{
	int i;

	if (src == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == charact)
		{
			return (&src[i]);
		}

	}

	if (src[i] == charact)
	{
		return (&src[i]);
	}
	return (NULL);
}
