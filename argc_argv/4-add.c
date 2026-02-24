#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int str_to_int(char *s);

/**
 * main - print num of args in argv[].
 * @argc: number of args.
 * @argv: arg array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, temp;

	for (i = 1; i < argc; i++)
	{
		temp = str_to_int(argv[i]);
		if (temp < 0)
		{
			printf("Error\n");
			return (-1);
		}

		sum += temp;
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * str_to_int - convert str to int.
 * @s: string to be checked.
 *
 * Return: resulting positive int or -1.
 */
int str_to_int(char *s)
{
	int i, result = 0;

	if (!*s)
		return (-1);

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (-1);
		result = result * 10 + (s[i] - '0');
	}

	return (result);
}
