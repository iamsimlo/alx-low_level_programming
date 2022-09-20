#include "main.h"
/**
 * print_alphabet_x10 - this funtion print the alphabet x10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (i = 0; i <= 9; ++i)
	{
		for (alp = 97; alp <= 122; ++alp)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
