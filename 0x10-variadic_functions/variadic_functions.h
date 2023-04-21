#ifndef _FUNCTION_VARIADIC_H_
#define _FUNCTION_VARIADIC_H_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#include<stdarg.h>

/**
 * struct print - multiple choice print
 * @x: char type
 * @T_func: function
 */
typedef struct print
{
	char *x;
	void (*T_func)(va_list);
} t_print;

#endif
