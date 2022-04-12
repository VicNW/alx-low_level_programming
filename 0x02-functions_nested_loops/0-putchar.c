#include "main.h"

/**
* main - this program prints _putchar
* we are not allowed to use stdio.h as our header file.
* Return: 0 always successful
*/

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
