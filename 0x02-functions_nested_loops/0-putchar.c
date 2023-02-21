#include <unistd.h>

/**
 * text
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
