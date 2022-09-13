#include <stdio.h>
/**
 * main - Entry point
 *
 * Programme will print out all alphabets
 * Return: always 0(success)
 */
int main(void)
{
	/*Declare char as cr*/
	char cr;
	/*putchar once off usage*/
	for (cr = 'a'; cr <= 'z'; cr++)
	{
		putchar(cr);
	}
	return (0);
}
