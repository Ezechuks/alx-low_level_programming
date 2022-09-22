#include "main.h"

/**
 * strcat - To concatenate the string pointing to @str
 * @dest: A pointer to the string
 * @src: the source string
 *
 * Return: a pointer to the destination string
 */

char *strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return(dest)
}
