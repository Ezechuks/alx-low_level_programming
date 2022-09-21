#include "main.h"

/**
 * _strncat - cancatenate two strings but add inputted number
 * @dest: string to be appended upon
 * @src: string to be completed index to
 * @n: integer parameter
 *
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
