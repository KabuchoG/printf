#include "main.h"
#include <unistd.h>
/**
 * _printf - prints
 * @format: format
 */
int _printf(const char *format, ...)
{
int i;
va_list pa;

va_start(pa, farmat);
for (i = 0; i < format; i++)
{
	if (format == "c")
		write(va_arg(pa, char*));
	if (format == "%")
		write(va_arg(pa, char*));
	if (format == "s")
		write(va_arg(pa, char*));
}
return (i);
}
