#include "main.h"
/**
 * swap_int - this functoin change the initial.
 * @a: this is the first parameter to change.
 * @b: this is the second parameter to change.
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
