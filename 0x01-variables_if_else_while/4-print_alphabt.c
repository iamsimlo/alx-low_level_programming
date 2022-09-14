#include <stdio.h>
/**
 * main - Entry point
 * Programme ommits alphabets e and q
 *
 * Return: always 0(success)
 */
int main(void)
{
	/*Declare char as cr */
	char cr;
	/*print lowercase alphabets and ommit e & q */
	for (cr = 'a'; cr <= 'z'; cr++)
	{
	if (cr != 'e' && cr != 'q')
	putchar (cr);
	}
	putchar ('\n');
	return (0);
}
