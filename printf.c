#include "main.h"
/**
 *_printf_helper_str - a printf helper function for string cases
 *@s: string input
 *@chars_written: int input
 *
 *Return: int chars written
 */
int _printf_helper_str(char *s, int chars_written)
{
char *null = "(null)";
if (s == NULL)
{
while (*null != '\0')
{
_putchar(*null);
chars_written++;
null++;
}
}
while (s != NULL && *s != '\0')
{
_putchar(*s);
s++;
chars_written++;
}
return (chars_written);
}
#include "main.h"
/**
 *_printf - a custome printf function
 *@format: const char pointer input
 *
 *Return: no of chars written
 */
int _printf(const char *format, ...)
{
int chars_written = 0;
const char *ptr = format;
char *s, c;
va_list args;
if (format == NULL)
{
return (-1);
}
va_start(args, format);
while (*ptr != '\0')
{
if (*ptr == '%' && (*(ptr + 1) == 'c' || *(ptr + 1) == 's' || *(ptr + 1) == '\0' || *(ptr + 1) == '%'))
{
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
chars_written = _printf_helper_str(s, chars_written);
}
else if (*ptr == '%')
{
_putchar(*ptr);
chars_written++;
}
}
else
{
_putchar(*ptr);
chars_written++;
}
ptr++;
}
va_end(args);
return (chars_written);
}
