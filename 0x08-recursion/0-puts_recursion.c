#include "main.h"
/**
 * _puts_recursion - prints a stringfollowed by a new line.
 * @s: pointer to string.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
