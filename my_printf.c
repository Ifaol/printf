#include "main.h"
/**
 *_printf_helper_str - a printf helper function for string cases
 *@s: string input
 *@chars_written: int input
 *
 *Return: int chars written
 */
int printf_helper_str(char *s, int chars_written)
{
if (s == NULL)
{
null_string();
chars_written = chars_written + 6;
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
va_list args;
if (format == NULL)
{
return (-1);
}
va_start(args, format);
while (*ptr != '\0')
{
if (*ptr == '%' && char_test(ptr))
{
chars_written = printf_helper_form(ptr, args, chars_written);
ptr++;
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
