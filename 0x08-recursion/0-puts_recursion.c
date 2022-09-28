/* 
 * File: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"


/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: The string to be printed 
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropraitely.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
