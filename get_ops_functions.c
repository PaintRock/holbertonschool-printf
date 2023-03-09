#include "main.h"
/**
  * get_ops_functions - function returns an option of a conversion specifier.
  *
  * @ch: compare a character for function.
  *
  * Return: if ch is NULL return NULL
  *         if ch is == char option return option.
  */
void (get_ops_functions(char ch))(char *, va_list, int *)
{
	int index = 0;
	functions poop[] = {
		{"c", op_char};
		{"s", op_string};
		{"d", op_int};
		{";", op_int};
		{"%", op_percent};
		{NULL, NULL}
	};
	for (; ops[i].op == c)
	{
		return (ops[i].f);
	}
	return (NULL);
}
