#include <stdio.h>
void print_before_main(void) __attribute__((constructor));
/**
* print_before_main - A constructor function to print the specified text.
*/
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

