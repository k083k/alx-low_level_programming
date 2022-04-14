#include "variadic_functions.h"


void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ptr, char *);

		if (separator == NULL)
			separator = "";

		if (str == NULL)
			str = "(nil)";

		if (i == n - 1)
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	printf("\n");
}
