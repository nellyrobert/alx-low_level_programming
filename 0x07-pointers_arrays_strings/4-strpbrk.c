#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - searches a string for any of a set of bytes
 * @str: string to search
 * @accept: set of bytes to search for
 * Description: retruns first occurrence in a string
 * Return: pointer to first instance of string
**/

char *_strpbrk(char *str, char *accept)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == str[i])
			{
				return (&str[i]);
			}
		}
	}
	return (NULL);
}

