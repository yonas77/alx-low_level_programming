#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}


	return (0);/* values null*/
}
