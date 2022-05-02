#include <stdio.h>

/**
* main - this function prints the number of passed argument.
* @argc: length of arguments passed in the function
* @argv: array of strings passed in the command line
* Return: zero, successful
*/

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
