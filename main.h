#ifndef main.h
#define main.h
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct rmt - function to check for format
 * @tpy: The printed format
 * @f: print the used function
 */
typedef struct rmt
{
	char *tpy;
	int (*l)();
} rmt_t;

int _printf(const char *format, ...);
