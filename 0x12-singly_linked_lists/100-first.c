#include <stdio.h>

/**
 * text -  function that prints
 */
void text(void)__attribute__((constructor));
void text(void)
{
	printf("You're beat! and yet, you must ");
	printf("allow,\nI bore my house upon my back!\n");
}
