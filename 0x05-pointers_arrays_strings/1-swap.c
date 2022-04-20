#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to first value.
 * @b: pointer to second value.
 * /
 
void swap_int(int *x, int *y)
{	
	int z;

	z = *x;
	*x = *y;
	*y = z;
	
}
