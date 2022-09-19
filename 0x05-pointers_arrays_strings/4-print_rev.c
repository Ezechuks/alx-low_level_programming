#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - string in reverse order
 * @r: reversed string
 * Return: nothing
 */

void print_rev(char *r)
{
	int len = strlen(r);

	while (len--)
		putchar(*(r + len));
	putchar(10);
}
