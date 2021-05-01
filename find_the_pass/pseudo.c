/*
    This file is not meant to be compiled. This is simply my "decompilation" of the
    assembly instructions. One day I would like to include the actual assembly 
    instructions next to their corresponding C code.
*/

if(argc != 2)
{
        printf("Usage:");
        return 0
}

len_user_input = strlen(argv[1])
password = malloc(len_user_input)
user_input = argv[1]
strcpy(password, user_input)
user_input = 0x1c
hash(user_input, is_0x1c)
hash_password = "pcx|xpzlhgu}"
if(strcmp(_hshpwd, hash_password) == 0)
{
        printf("access granted")
}
else
        printf("Wrongs password")





hash(user_input, is_0x1c)
{
        srand(0x1c)
        len_user_input = strlen(user_input)
        key = malloc(len_user_input (2*2))
        i = 0
        while(i < len_user_input)
        {
                key[i] = rand() % 10
                i++
        }
        j = 0
        while(j < len_user_input)
        {
                letter = user_input[j]
                letter += key[j]
                new_user_input[j] = letter
                j++
        }

        new_user_input[len_user_input] = '\0';
        strcpy(_hshpwd, new_user_input);

}