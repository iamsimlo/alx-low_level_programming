#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * program prints all possible different combinations of two digits
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i;
	int a = 0;
	int j = 49;

	for (i = 48; i <= 56; ++i)
	{
		for (; j <= 57; ++j)
		{

		putchar(i);
		putchar(j);
			if (i != 56 || j != 57)
			{
			putchar(44);
			putchar(32);
			}
		}
		a++;
		j = 49 + a;
	}
		putchar('\n');
	return (0);
}
