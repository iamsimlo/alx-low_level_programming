#include "main.h"
/**
 * _strcat -this function appends the src string to the dest string,
 *		 overwriting the terminating null byte (\0) at the end of dest
 *		 and then adds a terminating null byte
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the destination string @dest.
 */
int len(char *dest)
{
	return ((*dest != '\0') ? 1 + len(dest + 1) : 0);
}
/**
 * _strcat - function that copies a string.
 * @dest: This is pointer to the destination array.
 * @src: This is the string to be appended.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	char *d_itter = dest + len(dest);

	while (*src != '\0')
	{
		*d_itter = *src;
		src = src + 1;
		d_itter = d_itter + 1;
	}
	*d_itter = *src;
	return (dest);
}
