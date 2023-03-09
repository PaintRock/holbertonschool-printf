#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

typedef struct functions
{
	char *poop;
	void(*f)(char*, va_list, int*);
}functions;


/* Prototypes */
int (_printf(const char *format, ...);
     void(get_op_functions(char c))(char*, va_list, int*);
     void op_string(char *buffer, va_list args, int *buf_count);
     void op_char(char *buffer, va_list args, int *buf_count);
     void op_int(char *buffer, va_list args, int *buf_count);
     void op_percent(char *buffer, va_list args, int *buf_count);
#endif



























#endif
