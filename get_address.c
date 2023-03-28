#include "main.h"
/**
 * _address - prints the address of the argument passed
 * @list: list of arguments
 * Return: number of characters printed
 */
int _address(va_list list)
{
char *str = va_arg(list, char *);
int count = 0;
count += _putchar('0') + _putchar('x') + _hex_str_count((unsigned long int)str, 16, 'a');
return (count);
}
