#include "main.h"

/**
 * _putchar - function to print char
 * @c: char passed
 * Return:  char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
