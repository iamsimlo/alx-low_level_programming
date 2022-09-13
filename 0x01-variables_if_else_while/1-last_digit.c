#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
	{
	{
	int last_digit, n;
	/*Random number generator*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* to find last digit formulae */
	last_digit = n % 10;
	}
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d then is %d\n", n, last_digit, n);
	}
	else if (last_digit < 0 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, last_digit);
	}
	return (0);
	}
