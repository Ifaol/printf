#include "main.h"
/**
 *printf_helper_form - a printf helper function for format specifier cases
 *@args: args input
 *@ptr: pointer input
 *@chars_written: printed counter int input
 *
 *Return: No of chars printed
 */
int printf_helper_form(const char *ptr, va_list args, int chars_written)
{
char *s, c;
ptr++;
if (*ptr == '\0')
{
return (-1);
}
else if (*ptr == 'c')
{
c = (char)va_arg(args, int);
_putchar(c);
chars_written++;
}
else if (*ptr == 's')
{
s = (char *)va_arg(args, char *);
chars_written = printf_helper_str(s, chars_written);
}
else if (*ptr == '%')
{
_putchar(*ptr);
chars_written++;
}
return (chars_written);
}
