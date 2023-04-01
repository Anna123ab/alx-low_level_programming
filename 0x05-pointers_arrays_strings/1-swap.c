#include "main.h"

/**
* swap_int - swaps the values of 2 integers
*	using 2 parameters
*
* @a: input parameter 1
* @b: input parameter 2
*
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

