/*
    Author: Joshua Bailey
    This code simply illustrates a point I made in my blog post about using a signed char.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    signed char user_input
    if (argc <= 1)
    {
        printf("Usage: %s <some_number>\n", argv[0]);
        exit(-1);
    }
    user_input = atoi(argv[1]);
    printf("What you actually typed: %d\n", atoi(argv[1]);
    printf("Number converted to signed char: %d\n", user_input);
}