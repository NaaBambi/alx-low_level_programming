#include<stdio.h>

/**
 * initFunction - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void initFunction(void) __attribute__ ((constructor));

/**
 * initFunction - implementation of myStartupFun
 */
void initFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
