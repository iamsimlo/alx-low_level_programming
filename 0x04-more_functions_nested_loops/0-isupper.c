#include "main.h"
/**
 * _isupper - check whether 'c' is Uppercase.
 *
 * @c: - parameter to be checked
 * Return: 1 if 'c' is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
