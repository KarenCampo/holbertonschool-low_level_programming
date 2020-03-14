#include "variatic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function taht prints all
 * @format: list of past of arguments passed to the function
 * @*: pointer
 */

void print_all(const char * const format, ...)

{
	va_list d;
	va_start(d, format);
	t_argjr args[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_floar},
		{"s", f_string},
		{NULL, NULL}

}
