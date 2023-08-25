#include "main.h"
/**
 *null_string - a null printer for null strings fumction
 *
 *Return: Void
 */
void null_string(void)
{
char *null = "(null)";
while (*null != '\0')
{
_putchar(*null);
null++;
}
}
