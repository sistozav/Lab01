/*
This is a program will compile perfectly even
though the function is defined after it is called
because there is a prototype 
*/

#include <stdlib.h>
#include <stdio.h>

void hello(); // Prototype before the function call

int main()
{
hello();
}

void hello()
{
printf("Hello world\n");
}

