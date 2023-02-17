C-low_level_programming/0x01-variables_if_else_while/3-print_alphabets.c
@mecomonteshbtn
mecomonteshbtn First corrections on examples 3
Latest commit e955ef4 on Feb 6, 2020
 History
 1 contributor
22 lines (18 sloc)  287 Bytes

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}

