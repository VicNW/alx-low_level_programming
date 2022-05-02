#include <stdio.h>

/**
* main - this function prints all arguments it receives.
* @argc: length of arguments passed in the function
* @argv: array of strings passed in the command line
* Return: zero, successful
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
