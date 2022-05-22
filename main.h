#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
int _printf(const char *format, ...);
int print_buffer(char *buf, unsigned int nbuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf);

#endif
