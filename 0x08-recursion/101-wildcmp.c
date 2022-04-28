#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string, may contain wildcard *
 *
 * Return: 1 if match, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *p;

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
	{
		p = wildcard(s1, s2 + 1);
		if (p == 0)
			return (0);
		return (wildcmp(p + 1, s2 + 2));
	}
	else if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
