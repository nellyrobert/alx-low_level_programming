#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal values in a square array
 * @arr: array of values
 * @size: size of array
 * Description: prints sum of both diagonals
 * Return: nothing
 **/

void print_diagsums(int *arr, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + arr[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += arr[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
