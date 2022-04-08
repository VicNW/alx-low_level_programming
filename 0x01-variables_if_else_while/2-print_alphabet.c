#include <stdio.h>

/**
* main - This code prints the alphabets in lowercase
* Return: always 0, successful.
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
