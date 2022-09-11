#include <stdio.h>
/**
 * main - Entry point
 * Define data ans their size
 * Return: alwys 0 (Success)
 */
int main(void)
{
	char c;
	float fl;
	int i;
	long int lint;
	long long int lo;
	/*declarations of data types above*/
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a float: %ld byte(s)\n", sizeof(fl));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(lo));
	return (0);
}
