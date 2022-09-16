#include <stdio.h>
/**
 * main - Entry point
 * program print single intergers 0-10
 * Return: always 0(success)
 */
int main(void)
{
	/*Decalaration of int i*/
	int i;

	for (i = '0'; i <= '9'; i++)
		{
		putchar(i);
		}
		putchar('\n');
	return (0);
}
