
#ifndef PROTO_DECLARED
#define PROTO_DECLARED
#include <stdarg.h>

/**
 * _printf - print character values like printf in stdio
 * @format: format of a string to print
 * @...: variable length of arguments
 *
 * Retrun: number of characters printd
 */
int _printf(const char *format, ...);

/**
 * _putchar - prints a single character
 * @c: a character to print
 *
 * Return: 0 to show success
 */
int _putchar(char c);

/**
 * resolve_format - prints differect formats
 * @c: character to ditermine format
 * @printargs: variable arguments
 *
 * Return: number of printed charcters
 */
int resolve_format(char c, va_list printargs)

/**
 * print_string - prints strings
 * @s: string pointer to print
 *
 * Return: number of printed characters
 */
int print_string(char *s)

/**
 * print_number - prints numbers
 * @d: number to print
 *
 * Return: number of printed digits
 */
int print_number(int *d)
#endif
