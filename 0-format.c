#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 *
 * @format: string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	char *str = NULL;

	for (len = 0; format[len] != '\0'; len++)
		;
	len += 1;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (1);

	for (i = 0; str[i] != '\0'; i++)
		str[i] = format[i];
	str[i] = '\0';

	return (write(1, str, len));
}
