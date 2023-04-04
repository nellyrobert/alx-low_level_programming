#include "main.h"

/**
 * print_chessboard - print chessboard
 * @arr: array of board with values
 * Description: uses input a to print a chessboard
 * Return: nothing
 **/

void print_chessboard(char (*arr)[8])
{
	int i, j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i <= 8; i++)
		{
			if (i == 8)
				_putchar('\n');
			else
				_putchar(arr[j][i]);
		}
	}
}
