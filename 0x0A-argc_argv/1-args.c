#include <stdio.h>
#include <stddef.h>


/**
 * main - function that print number of arguments followed by new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char **argv)
{
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
