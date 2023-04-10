#include "main.h"
#include <stdio.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		if (argv[i] == NULL)
			printf("arcgv is empty\n");
		else 
			printf("%s\n", argv[i]);
        return (0);
}
