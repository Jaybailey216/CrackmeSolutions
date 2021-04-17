/*
    So I'm not 100% sure about the types and things here but this is the general flow of the 
    binary. The keygen simply implements lines 26-37 in Python. I guess I could have done it 
    in C but Python seemed easier at the time.
*/

void rot(int, char*);

int main(int argc, char* argv[])
{
    char* user_input;
    printf("Rules..."); // He prints out the rules witha series of puts cals
    printf("Prompt:");
    scanf("%s", &user_input);
    char* secret_message = "This is a top secret text message!";
    int vmware_check = sidt(); // Not entirely sure how to write this in C but essentially he is checking to see if we are running in a VM
    if(vmware_check)
    {
        printf("VMWare detected!");
        exit(1);
    }
    // He calls the rot function twice which will encrypt and then decrypt the secret_message
    // It is simply there to fool you and he fooled me!
    rot(0xd, secret_message);
    rot(0xd, secret_message);
    // This is the section of code that we are really interested in
    char coffee[19] = "AHi23DEADBEEFCOFFEE";
    char enc_coffee[19];
    enc_coffee[0] = coffee[0] ^ 2;
    enc_coffee[1] = coffee[3] - 0xA;
    enc_coffee[2] = coffee[2] + 0xC;
    enc_coffee[3] = coffee;
    enc_coffee[4] = coffee[1];
    int i = 5;
    while (i <= 18)
    {
        enc_coffee[i] = coffee[i] - 1;
        i++;
    }
    if(strcmp(user_input, enc_coffee) == 0)
    {
        printf("you succeed!!");
    }
    else
        printf("You failed!!");
    return 0;
}





// rot function 
void rot(int num, char* secret_message)
{
    char* uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
    int secret_message_len = strlen(secret_message);
    int i = 0;
    while(i < secret_message_len)
    {
        if(isalpha(secret_message[i]))
        {
            num = tolower(secret_message[i]);
            secret_message[i] = uppercase_letters[(num - 0x61 + 0xd) % 0x1a];
        }
        else
        {
            num = tolower(secret_message[i]);
            secret_message[i] = lowercase_letters[(num - 0x61 + 0xd) % 0x1a];
        }
        i++;
    }
}