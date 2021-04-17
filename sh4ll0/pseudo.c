/*
    This binary did not require a keygen. This is the disassembly 
    represented in C to (hopefully) help you understand the flow 
    a little better. I guess you could also just look at the 
    decompilation from Ghidra as well lol
*/
char* fake_flag = "er2rg2e1h94flagergjerj";
printf("Give me your password: ");
int is_0x73 = 0x73;
void(*user_input)(); // Creating a void function pointer because the function we want to call does not return a valud nor does it accept an argument
char format_specifier[3];
format_specifier[0] = '%';
format_specifier[2] = 'p';
format_specifier[3] = '\0';
scanf(format_specifier, &user_input); 
user_input -= is_0x73; // We must add 0x73 to the address of the function we want to call
(*user_input)();