#include "main.h"
/**
 * _strcat -this function appends the src string to the dest string,
 *		 overwriting the terminating null byte (\0) at the end of dest
 *		 and then adds a terminating null byte
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to dest.
 * int i - function declaration
 * Return: A pointer to the destination string @dest.
 */
int i(char *dest)
{
	return ((*dest != '\0') ? 1 + i(dest++) : 0);
}

char *_strcat(char *dest, char *src)
{
	char *dub = dest + i(dest);

	while (*src != '\0')
	{
		*dub = *src;
		src = src + 1;
		dub = dub + 1;
	}
	*dub = *src;
	return (dest);
}
