#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * mul - function to multiply 2 integers
 * @a: is the 1st integer parameter
 * @b: is the second interger parameter
 * Return: Always 0.
 */
int mul(int a, int b)
{
	/* ask for user input */
	printf("Please enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	return (a * b);

}
