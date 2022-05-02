#include <stdio.h>

/**
* main - this function prints th efile name.
* @argc: length of arguments passed in the function
* @argv: array of strings passed in the command line
* Return: zero, successful
*/

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
