#include "main.h"

/**
 * _strncpy - c function that copies a string
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max bite number
 *
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
