#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;

	int flags, width, precision, size, buff_ind = 0;

	va_list list;

	char buffer[BUFF_SIZE];

	if (format == NULL)

		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)

	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];

			if (buff_ind == BUFF_SIZE)

				print_buffer(buffer, &buff_ind);

			/* write(1, &format[i], 1);*/

			printed_chars++;
		}

