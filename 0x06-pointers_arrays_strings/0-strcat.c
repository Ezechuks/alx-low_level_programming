#include "main.h"

/**
 * _strcat - concatenates the string point to @src to the end
 * @dest: string that will be appended
 * @src: concatenated string
 *
 * Return: returns pointer to @dest
 */

char *strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len] = src[index];

	return (dest);
}
