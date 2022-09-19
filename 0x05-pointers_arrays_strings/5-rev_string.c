#include "main.h"

/**
 * rev_string - reverses a string
 * @s: modified string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int i, c, k;
	
	c = 0;
	k = 0;

	while (s[c] != ,'\0')
		c++;

	k = c - 1;
	for (i = 0; i < c / 2; i++)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k] = tmp;
		k -= 1;
	}
}
