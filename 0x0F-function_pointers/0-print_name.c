#include "function_pointers.h"

/** print_name - this function prints a name
* @name: pointer string
* @f: pointer to function
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	return (f(name));
}
