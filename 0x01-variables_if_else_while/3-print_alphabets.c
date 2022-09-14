#include <stdio.h>
/**
 * main - Entry point
 *
 * Programme will print out all alphabets lower and uppercase
 * Return: always 0(success)
 */
int main(void)
{
	/*Declare char as cr*/
	char cr;
	/*print lowercase alphabets*/
	for (cr = 'a'; cr <= 'z'; cr++)
	{
	putchar(cr);
	}
	/*print uppercase alphabets*/
	for (cr = 'A'; cr <= 'Z'; cr++)
	{
	putchar(cr);
	}
	putchar('\n');
	return (0);
}
