#include "variadic_functions.h"

/**
 * printChar - prints character
 * @ap: the argument
 * Return: void.
 */
void printChar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * printInt - prints integer
 * @ap: the argument
 * Return: void.
 */
void printInt(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * printFloat - prints float
 * @ap: the argument
 * Return: void.
 */
void printFloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * printStr - prints string
 * @ap: the argument
 * Return: void.
 */
void printStr(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);

}

/**
 * print_all - prints anything.
 * @format: the format.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	char *sep = "";
	int fdx = 0;
	int ddx;
	va_list ap;

	pType fDict[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printStr},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[fdx] != '\0')
	{
		ddx = 0;
		while (fDict[ddx].at)
		{
			if (*fDict[ddx].at == format[fdx])
			{
				printf("%s", sep);
				fDict[ddx].f(ap);
				sep = ", ";
			}
			ddx++;
		}
		fdx++;
	}
	printf("\n");
	va_end(ap);
}
