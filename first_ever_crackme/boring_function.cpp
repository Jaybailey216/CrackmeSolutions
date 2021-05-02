/*
    Author: Joshua Bailey
    This code attempts to replicate the crackme: https://www.crackmes.one/crackme/6074618733c5d44899821e35
    g++ boring_function -o boringFunc
    It also prints out the correct string the binary expects.
*/

#include <iostream>
#include <string>

using namespace std;

void myFunc(string&);

int main()
{
    string password;
    string user_input = "";
    password  = "1,)=8(";
    int i = 0;
    password += ";18,w";

    cout << "Enter key: ";
    cin >> user_input;
    
    cout << "\nPassword: " << password << endl;
    myFunc(password);
    if(user_input == password)
    {
        cout << "Congratulations!" << endl;
    }
    else
        cout << "Too bad!" << endl;
    
    return 0;

}

void myFunc(string &test)
{
    int i = 0;
    char key[] = "XYZ";
    cout << "Before modifiying test: " << test << endl;
    long size = test.size();
    while(i < size - 1){
        test[i] = test[i] ^ key[i % 3];
        i++;
    }
    cout << "After modifying test: " << test << endl;

}