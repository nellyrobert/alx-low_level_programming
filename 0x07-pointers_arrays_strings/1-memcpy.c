#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @nc: number of bytes to copy to dest
 * Description: copies n values from src to dest
 * Return: pointer to memory
 **/

char *_memcpy(char *dest, char *src, unsigned int nc)
{
	for (; nc > 0; nc--)
	{
		dest[nc - 1] = src[nc - 1];
	}

	return (dest);
}
