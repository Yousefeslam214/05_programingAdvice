#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;


string ReadPass()
{
    string password;
    cout << "enter password" << endl;
    cin >> password;
    return password;
}

string EncryptText(string Text, short key)
{
    for (int i = 0; i <= Text.length(); i++)
        Text[i] = char((int) Text[i] + key);
    return Text;
}

string dencryptText(string Text, short key)
{
    for (int i = 0; i <= Text.length(); i++)
        Text[i] = char((int) Text[i] - key);
    return Text;
}

int main ()
{
    string pass = ReadPass();
    string enc = EncryptText(pass, 2);
    string den = dencryptText(enc, 2);
    cout << "encrypto is " << enc << endl;
    cout << "dencrypt is " << den << endl;
}
