#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function printf
 *
 * Return: 0
 */
int main(void)
{
	char *str = "Hello world";

	_printf("str");
	putchar('\n');

	free(str);
	return (0);
}
