#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 if no errors
 */
int main(int argc, char **argv)
{
	int idx, num;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);

	num = atoi(argv[1]);
	if (num < 0)
		printf("Error\n"), exit(2);

	for (idx = 0; idx < num - 1; idx++)
		printf("%02hhx ", ptr[idx]);
	printf("%02hhx\n", ptr[idx]);
	return (0);
}
