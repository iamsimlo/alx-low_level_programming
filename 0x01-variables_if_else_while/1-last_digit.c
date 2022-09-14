#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: always 0(Success)
 */
int main(void)
{
	int n;
	int lastdigit;
  /* Random num generator function, uses time resources from local system.*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
  /* function to find the last digit */
	lastdigit = n % 10;
  /* Inserting if else statements */
	if (lastdigit == 0)
	{
	printf("Last digit of %d is %d and is %d\n", n, lastdigit, lastdigit);
	}
	else if (lastdigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}
