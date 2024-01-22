#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

char RandomChar()
{
    return (rand() % (65 - 90 + 1) + 65);
}

string GetRandomPassword()
{
    int num = 4;
    string password = "";
    for (int i = 1; i <= num; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            password += RandomChar();
        }
        if (i < num)
            password += "-";
    }
    return password;
}

void printPassword(int num)
{
    for (int i = 1; i <= num;i++)
    {
        cout << "Key [" << i << "] : " << GetRandomPassword() << endl;
    }
}
int main ()
{
    srand((unsigned)time(NULL));
    printPassword(5);
    return 0;
}
