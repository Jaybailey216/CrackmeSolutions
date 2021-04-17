"""
    The notme function prints some hex characters that are equal to 
    the enc_flag variable in ASCII. Since this is a hackthebox 
    challenge we know the flag should follow the format HTB{some_flag}.
    The decrypt function will perform this decryption and print the flag.
    Alternatively, you could use CyberChef!
"""

enc_flag = "UGO{l0h_e34yyl_t0g_z3}"

def decrypt(flag, key):
        dec_flag = ""
        for x in flag:
                if x.isalpha() and x.isupper():
                        dec_flag += chr((ord(x) + key - 65) % 26 + 65)
                elif x.isalpha() and x.islower():
                        dec_flag += chr((ord(x) + key - 97) % 26 + 97)
                else:
                        dec_flag += x
        print dec_flag

if __name__ == '__main__':
        key = 13
        decrypt(enc_flag, key)