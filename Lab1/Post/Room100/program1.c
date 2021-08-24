/*
This is a program will compile but with warnings
because a function is defined after it is called and
there is no prototype.
*/
#include <stdlib.h>
#include <stdio.h>

main()
{
hello();
}


int hello()
{
printf("Hello world\n");
}

