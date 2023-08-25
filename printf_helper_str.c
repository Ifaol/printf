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
