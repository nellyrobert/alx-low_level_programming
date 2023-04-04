#include "main.h"
#include <stddef.h>

/**
 * compare - compares two strings
 * @src: source string
 * @comp: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/

int compare(char *src, char *comp)
{
	int i;

	for (i = 0; comp[i] != '\0'; i++)
	{
		if (src[i] == '\0')
			return (0);
		if (src[i] != comp[i])
			return (0);
	}
	return (1);
}

/**
 * _strstr - locates a substring
 * @src: source string
 * @comp: substring
 * Description: finds first instance of needle in haystack
 * Return: pointer to first instance, NULL if not in haystack
 **/

char *_strstr(char *src, char *comp)
{
	int j;

	if (comp[0] == '\0')
		return (src);

	for (j = 0; src[j] != '\0'; j++)
	{
		if (comp[0] == src[j])
		{
			if (compare(&src[j], comp) == 1)
				return (&src[j]);
		}
	}
	return (NULL);
}
