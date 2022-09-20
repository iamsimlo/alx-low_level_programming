#include "main.h"
/**
 * print alphabets using function from local header
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	char alp;

	for(alp = 'a';alp <= 'z'; ++alp)
	{
		_putchar(alp);
	}
	_putchar("\n");
}
