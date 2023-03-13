# _printf :page_facing_up:

This project challenged us to recreate some of the functionallity of printf without global variables or switch / case statements. The only allowed functions or macros were:\
`write`,\
`malloc`,\
`free`,\
`va_start`,\
`va_arg`,\
`va_copy`, and\
`va_end`.
\
With these tools we created a program that returns the number of characters printed (excluding the null byte used to end output to strings), writes to the standard output stream, and handles the following conversion specifier types:\
`c`,\
`s`,\
`d`,\
`i`.

In this project we did not handle:\
flag characters,\
field width,\
precision,\
length modifiers.

## Process Flow Chart for _printf
![_printf flowchart](https://user-images.githubusercontent.com/122139376/224381425-705fc26a-99c6-401f-93b9-d3316839eb7e.jpg)



## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 20.04 LTS machine with `gcc` version 9.4.0.
### 
Compilation was competed with the following `gcc` options `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Usage :running:

To use the `_printf` function, assuming the above dependencies have been installed,
compile all `.c` files in the repository and include the header `main.h` with
any main function.

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc *.c -o tester
```

Output:
```
$ ./tester
Hello, World!
$
```

## Description :speech_balloon:

The function `_printf` writes output to standard output under the control of a `format` string that specifies how subsequent arguments are
converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

Upon successful return, `_printf` returns the number of characters printed
(excluding the terminating null byte used to end output to strings). If an
output error is encountered, the function returns `-1`.

### Format of the Argument String

The `format` string argument is a constant character string composed of zero
or more directives:\
ordinary characters (not `%`) which are copied unchanged
to the output stream;\
conversion specifiers, each of which results in
fetching zero or more subsequent arguments.
Conversion specification is
introduced by the character `%` and ends with a conversion specifier. 

This project does not include the zero or more _flags_, optional minimum _field width_, optional
_precision_ or optional _length_ modifier. 



#### Conversion Specifiers

The conversion specifier (introduced by the character `%`) is a character that
specifies the type of conversion to be applied. The `_printf` function
supports the following conversion specifiers: c,s,i,d,%

#### d, i
The `int` argument is converted to signed decimal notation.

Example `main.c`:
```
int main(void)
{
    _printf("%d\n", 7);
}
```
Output:
```
7
```
# AUTHORS
```
by Crystal Carrillo and Ann Adel Knode
```
