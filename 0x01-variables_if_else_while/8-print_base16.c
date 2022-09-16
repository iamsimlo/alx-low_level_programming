#include <stdio.h>
/**
 * main - Entry point
 *
 * Program will print out hexidecimal
 * Return: always 0(success)
 */
int main(void)
{
	/*Declare int and char vars*/
	int i;
	char cr;
	/*print base 10*/
	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	/*print lowercase alphabets*/
	for (cr = 'a'; cr <= 'f'; cr++)
	{
	putchar(cr);
	}
	putchar('\n');
	return (0);
}
