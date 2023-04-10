#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
