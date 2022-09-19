#include "main.h"

/**
 * _strlen - the length of a string
 * @l: string
 * Return: mothing
 */

int _strlen(char *l)
{
	int len = 0;

	while (*(l + len) != '\0')
		len++;

	return (len);
}
