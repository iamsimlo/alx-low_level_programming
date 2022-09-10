#include <stdio.h>
/**
 * main - Entry point
 * Define data ans their size
 * Return: alwys 0 (Success)
 */
int main (void)
{
	char char_size;
	float fl;
	int i;
	long int lint;
	long long int lo;
	printf("Size of a char: %ld byte\n",sizeof(char_size));
	printf("Size of a float: %ld byte\n",sizeof(fl));
	printf("Size of an int: %ld byte\n",sizeof(i));
	printf("Size of a long int: %ld byte\n",sizeof(lint));
	printf("Size of a long long int: %ld bytes\n",sizeof(lo));
	return(0);
}
