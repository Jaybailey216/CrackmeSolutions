t = time(0);
srand(t);
random_num = rand();
random_num = random_num + (random_num / 0x2e) * -0x7e + 0x1;
if(argc <= 1)
	user_input = random_num;
else
{
	user_input = atoi(argv[1]);
    if((user_input < 0) || (user_input == 0x7F))
    	user_input = random_num;
    else
    	goto here;	
}
here:
	if(sub_4009AA())
    // unk_6020E0 is a static string defined in the binary
        sub_400A5B(unk_6020E0, user_input);


int sub_4009AA()
{
	fp* = fopen("/tmp/secret", "rb");
    if (fp == 0)
    	exit(0);
    memset(file_contents, 0, 0x64);
    fread(file_contents, 1, 0x64, fp);
    // Here secret is a static variable that contains VerySuperSeKretKey
    if(strcmp(file_contents, secret) == 0)
        exit(1);
    if(file_contents[0] == '\xDE' && file_contents[1] == '\xAD'
    && file_contents[2] == '\xBE' && file_contents[3] == '\xEF')
        return 1;
}

// user_input is an integer
void sub_400A5B(unk_6020E0, user_input)
{
    unk_6020E0_copy = unk_6020E0
    user_input = user_input
    i = 0
    while(user_input != unk_6020E0_copy)
    {
        if(i > 0x11)
            break;
        printf("%x", unk_6020E0_copy[i] ^ user_input);
        i++
    }
}