#include <stdio.h>
/**
 * main - Entry point
 * Define datatype and their size
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaring variables*/
	char c;
	int i;
	long lint;
	long long lng;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lng));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
