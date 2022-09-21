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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
