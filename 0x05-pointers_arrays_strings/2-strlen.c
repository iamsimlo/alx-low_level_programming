#include "main.h"
/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
