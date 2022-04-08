#include <stdio.h>

/**
* main - This code prints the alphabets in lowercase except e and q
* Return: always 0, successful.
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	ch++;
	}
	putchar('\n');
	return (0);
}
