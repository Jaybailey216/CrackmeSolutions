/*
    Author: Joshua Bailey
    This program will generate the key for the following crackme: https://www.crackmes.one/crackme/5fcbac7733c5d424269a1a93
    This must be compiled with mingw like so:
    i686-w64-mingw32-gcc-win32 keygen.c -o keygen
    Of course you can change the name to whatever you want.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *hash = "pcx|xpzlhgu}";
    int random_number;
    int i = 0;
    char password[12];
    srand(0x1c);
    while(i < strlen(hash))
    {
        random_number = rand() % 10;
        printf("random_number: %d\n", random_number);
        password[i] = (int)hash[i] - random_number;
        i++;
    }
    printf("%s\n", password);

    return 0;
}
