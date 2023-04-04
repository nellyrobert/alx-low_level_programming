#include "main.h"

/**
 * _strspn - get length of a substring prefix
 * @str: string
 * @accept: bytes being compared
 * Description: finds number of bytes required to find accept in s
 * Return: bytes required to find accept
 **/

unsigned int _strspn(char *str, char *accept)
{
	int i, j, exit;

	for (i = 0; str[i] != '\0'; i++)
	{
		exit = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == str[i])
			{
				exit = 1;
			}
		}
		if (exit == 0)
		{
			return (i);
		}
	}
	return (i);
}
