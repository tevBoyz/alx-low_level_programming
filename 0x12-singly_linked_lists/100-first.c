#include <stdio.h>

/**
 * before_main - run before main
 */

void __attribute__ ((constructor)) before_main(void)
{
printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
);
}

