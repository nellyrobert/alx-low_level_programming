#include "main.h"
/**
 *swap_int - main function
 *@b : pointer
 *@a : pointer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
