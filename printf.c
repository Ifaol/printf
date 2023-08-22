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
while (format && *ptr != '\0')
{
if (*ptr == '%')
{
ptr++;
if (*ptr == 'c')
{
c = (char)va_arg(args, int);
_putchar(c);
chars_written++;
}
else if (*ptr == 's')
{
s = (char *)va_arg(args, char *);
if (s == NULL)
{
return (-1);
}
while (*s != '\0')
{
_putchar(*s);
s++;
chars_written++;
}
}
else if (*ptr == '%')
{
_putchar(*ptr);
chars_written++;
}
else
{
--ptr;
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
