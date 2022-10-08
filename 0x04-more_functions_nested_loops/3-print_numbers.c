#include "main.h"
/**
 * print_numbers - function print numbers from 0-9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 1; i <= 10; ++i)
	{
		_putchar('0' + i);
	}
	_putchar('\n');

}
