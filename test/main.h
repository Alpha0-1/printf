#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#define S_LONG 2
#define S_SHORT 1

int main(void);
int _printf(const char *format, ...);
int print_integer(int num);
int print_binary(unsigned int arg);
int print_unsigned_int(unsigned int arg);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_string(char *str);
int print_string_hex(char *str);
int print_pointer(void *ptr);
int print_num_lh(va_list args, char length, char specifier);

#endif
