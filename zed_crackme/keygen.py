"""
    This script will solve Zed's crackmes from crackmes.one. It's an interesting challenge with a rabbit that I fell for and the author
    still laughs at me forit.
"""

def decrypt_serial(enc_serial):
        dec_serial = ""
        dec_serial += chr(enc_serial[0] ^ 2)
        dec_serial += chr(enc_serial[3] - 0xa)
        dec_serial += chr(enc_serial[2] + 0xC)
        dec_serial += chr(enc_serial[2])
        dec_serial += chr(enc_serial[1] + 1)

        j = 5
        while j <= 0x12:
                dec_serial += chr(enc_serial[j] - 1)
                j += 1
        print dec_serial

if __name__ == '__main__':
        enc_serial = bytearray.fromhex("454546464F4346454542444145443332694841")
        enc_serial.reverse()
        decrypt_serial(enc_serial)