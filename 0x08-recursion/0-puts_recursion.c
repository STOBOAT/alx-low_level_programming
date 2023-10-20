#include "main.h"
/**
 * _puts_recursion - function to print a string
 *
 *@s: string to be printed
 *
 * Return: Always 0
 */
void _puts_recursion(char *s);

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
/**
* main - Entry point of the code
*
* Return: Always 0 (Success)
*/
int main(void)
{
    _puts_recursion("Puts with recursion");
    _putchar('\n');
    
    return 0;
}
