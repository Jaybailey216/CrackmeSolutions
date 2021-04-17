"""
    There's no pseudo.c associated with this challenge since it was written in .NET and was not obfuscated. This code will generated a valid
    key for any username the user enters. If you find any issues or edge cases let me know!
"""

# -*- coding: cp1252 -*-
text = "papanyquiL";
username = raw_input("Enter a username: ")
for i in range(0, len(username)):
    text = text + (username + str(1) + str(3)).replace(" ", "").replace("a", "@").replace("b", "1").replace("c", "*").replace("d", "4") \
           .replace("e", "!").replace("f", "#").replace("g", "-").replace("h", "%").replace("i", "£").replace("j", "$").replace("k", "^").replace("l", "'") \
           .replace("m", ".").replace("n", "~").replace("o", "+").replace("p", "=").replace("q", "2").replace("r", "\\").replace("s", "9").replace("t", "/") \
           .replace("u", "6").replace("v", ":").replace("w", "8").replace("x", "]").replace("y", "7").replace("z", "[") + str((len(username) ^ i));

print text
