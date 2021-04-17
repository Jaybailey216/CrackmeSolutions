/*
    This binary really only contained one function of interested that performed
    a very simple "encryption"
*/

int i = 0;
while (i <= 0x15)
{
	new_array[i] = ar[i] ^ 0x29a;
    printf("%x", new_array[i]);
    i++;
}