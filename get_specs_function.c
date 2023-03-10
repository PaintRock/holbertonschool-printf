#include "main.h"
/**
  * get_spec_functions - function returns an option of a conversion specifier.
  *
  * @ch: compare a character for function.
  *
  * Return: if ch is NULL return NULL
  *         if ch is == char option return option.
  */
void (*get_spec_functions(char ch))(char *, va_list, int *)
{
	int i = 0;
	functions poop[] = {
		{"c", spec_char},
		{"s", spec_string},
		{"d", spec_int},
		{"i", spec_int},
		{NULL, NULL}
	};
	for (; poop[i].poop != NULL && *(poop[i].poop) != ch; i++)
	{
		/* do nothing */
	}
	if (poop[i].poop == NULL)
	{
		return (NULL);
	}
	return (poop[i].f);
}
