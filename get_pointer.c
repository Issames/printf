#include "main.h"
/**
 * _pointer - prints the address of a pointer in hexadecimal
 * @pointer: pointer to be printed
 * Return: number of characters printed
 */
int _pointer(va_list pointer)
{
void *p = va_arg(pointer, void *);
unsigned long int n = (unsigned long int)p;
int count = 0;

count += _putchar('0');
count += _putchar('x');
if (n == 0)
{
	count += _putchar('0');
	return (count);
}
count += _hex_str(n, 16, 'a');
return (count);
}

