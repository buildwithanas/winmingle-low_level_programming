#include <stdio.h>


/**
 * before_main - prints a message before the main function is executed
 * 
 * This function is declared with the constructor attribute, which causes it
 * to be called automatically before main() starts.
 */

void __attribute__ ((constructor)) before_main(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


