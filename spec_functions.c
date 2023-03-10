#include "main.h"
/**
 * spec_char - handle specific char 'c' from
 * list of args
 *
 * Description: Function that returns a character.
 *
 * @buffer: points to memory location where
 * output is stored
 *
 * @args: Arguments passed to printf function
 *
 * @bf_count: Iterating pointer to an int that
 * keeps track of current position of the buffer.
 *
 */


void spec_char(char *buffer, va_list args, int *bf_count)
{
        char c;

        c = (char)va_arg(args, int);
        buffer[*bf_count] = c;
        (*bf_count)++;
}

/**
* spec_string- handle specific char 's' from
* list of args
*
* Description: Function that returns a character.
*
* @buffer: points to memory location where
* output is stored.
*
* @args: Arguments passed to printf function
*
* @bf_count: Iterating pointer to an int that keeps
* track of current position of the buffer.
*
*/

void spec_string(char *buffer, va_list args, int *bf_count)
{
        int i;
        char *ch = NULL;

        ch = va_arg(args, char *);

        if (ch == NULL)
                ch = "(null)";

        for (i = 0; ch[i] != '\0'; i++)
        {
                buffer[*bf_count] = ch[i];
                (*bf_count)++;
        }
}
/**
* spec_int - handle specific char 'i' and 'd'
* from list of args
*
* Description: Function that returns a character.
*
* @buffer: points to memory location
* where output is stored
*
* @args: Arguments passed to printf function
*
* @bf_count: Iterating pointer to an int that keeps
* track of current position of the buffer.
*
*/
void spec_int(char *buffer, va_list args, int *bf_count)
{
        int arg, temp_arg, temp_num, num = 0, digits[15];

        args = temp_arg = (int)va_arg(args, int);

        if (arg == 0)
        {
                buffer[*bf_count] = 48;
                (*bf_count)++;
        }
        if (arg > 0)
        {
                while (arg != 0)
                {
                        temp_arg = arg % 10;
                        arg /= 10;
                        digits[num] = temp_arg;
                        num++;
                }
        }
        else if (arg < 0)
        {
                buffer[*bf_count] = '-';
                (*bf_count)++;
                while (arg != 0)
                {
                        temp_num = arg % 10 * -1;
                        digits[num] = temp_num;
                        arg /= 10;
                        num++;
                }
        }
        num--;
        while (num >= 0)
        {
                buffer[*bf_count] = digits[num] + '0';
                (*bf_count)++;
                num--;
        }
}

/**
  * spec_percent- handle specific char '%'
  * from list of args
  *
  * Description: Function that returns a character.
  *
  * @buffer: points to memory location
  * where output is stored
  *
  * @args: Arguments passed to printf function
  *
  * @bf_count: Iterating pointer to an int that
  * keeps track of current position of the buffer.
  *
  */
void spec_percent(char *buffer, va_list args, int *bf_count)
{
        buffer[*bf_count] = '%';
        (*bf_count)++;
}
