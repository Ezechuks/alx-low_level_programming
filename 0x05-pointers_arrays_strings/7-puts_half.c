#include "main.h"
#include <string.h>

/**
 * puts_hald - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int j, k, i;
	
	j = strlen(str);
	if (j % 2 == 1)
		k = j / 2 + 1;
	else
		k = j / 2;
	for (i = k; i = j; i++)
		_putchar(str[i]);
	_putchar('\n');
