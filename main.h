#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
/* Structures */
/**
* struct functions - handles format specifiers.
* @poop: Adels fun name for pointer to format specifiers
* @f: function pointer for corresponding functions that
* handle the pointer.
* Description: struct has 2 members. a pointer for format
* specifiers and function pointer to functions created to
* handle the format specifiers.
*/
typedef struct functions
{
	char *poop;
	void (*f)(char*, va_list, int*);
} functions;


/* Prototypes */
int _printf(const char *format, ...);
void (*get_spec_functions(char c))(char*, va_list, int*);
void spec_string(char *buffer, va_list args, int *buf_count);
void spec_char(char *buffer, va_list args, int *buf_count);
void spec_int(char *buffer, va_list args, int *buf_count);
#endif
