/**
 * File: 1-print_rev_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _print_rev_recurssion - prints a string in reverse
 * @s: The string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recurssion(s + 1);
		_ putchar(*s);
	}
}
