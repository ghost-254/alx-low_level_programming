#include <stdio.h>

/* Author: Neville Otieno */

void print_beat(void) __attribute__((constructor));

/**
 * print_beat - Prints a message before the main function is executed.
 */
void print_beat(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
