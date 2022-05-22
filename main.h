#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
int _printf(const char *format, ...);
int print_buffer(char *buf, unsigned int nbuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf);
int func_spec(const char *s, int index)
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);

#endif
