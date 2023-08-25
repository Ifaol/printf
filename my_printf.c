#include "main.h"
/**
 *my_printf - a custome printf function
 *@format: const char pointer input
 *
 *Return: no of chars written
 */
int _printf(const char *format, ...)
{
int test, chars_written = 0;
const char *ptr = format;
va_list args;
if (format == NULL)
{
return (-1);
}
va_start(args, format);
while (*ptr != '\0')
{
test = char_test(ptr);
if (*ptr == '%' && test == 1)
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
