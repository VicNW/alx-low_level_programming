#include <stdio.h>
#include <stdlib.h>
/**
* main - this function prints  the result of the multiplication.
* @argc: length of arguments passed in the function
* @argv: array of strings passed in the command line
* Return: zero, successful
*/

int main(int argc, char *argv[])
{
	int mul = atoi(argv[1]) * atoi(argv[2]);
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mul);
	}
	return (0);
}
