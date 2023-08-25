#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void null_string(void);
int printf_helper_form(const char *ptr, va_list args, int chars_written);
int printf_helper_str(char *s, int chars_written);
int char_test(const char *ptr);
int printf_helper_doubles(double d, int chars_written);
int printf_helper_ints(int i, int chars_written);
int printf_helper_num(const char *ptr, va_list args, int chars_written);
#endif
