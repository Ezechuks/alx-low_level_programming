#include "main.h"

/**
 * _strchr - locates string characters
 * @s: string
 * @c: character
 *
 * Return: Pointer to the first occurence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring While*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0); /* values null*/
}
