#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: parameter argc
 * @argv: an array of a command line
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
