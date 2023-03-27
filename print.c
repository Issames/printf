#include "main.h"
#include "main.h"
/**
 * print - function to check which specifier to print
 * @frmt: string being passed
 * @print_arr: array of struct ops
 * @list: list of arguments to print
 * Return: numb of char to be printed
 */
int print(const char *format, rmt_t *print_arr, va_list l)
{
char a;
int count = 0, b = 0, c = 0;
a = format[b];
while (a != '\0')
{
	if (a == '%')
	{
		c = 0;
		b++;
		a = format[b];
		while (print_arr[c].type != NULL && a != *(print_arr[c].type))
			c++;
		if (print_arr[c].type != NULL)
			count = count + print_arr[c].f(l);
		else
		{
			if (a == '\0')
				return (-1);
			if (a != '%')
				count += _putchar('%');
			count += _putchar(a);
		}
	}
	else
		count += _putchar(a);
	b++;
	a = format[b];
}
return (count);
}

/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int _printf(const char *format, ...)
{
	va_list l;
	int a = 0;

	rmt_t ops[] = {
		{"c", ch},
		{"s", str},
		{"d", _int},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(l, format);
	a = print(format, ops, l);
	va_end(l);
	return (a);
}
