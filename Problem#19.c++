#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

enum enCharType {smallletter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4};

int RandomNum (int from, int To)
{
    int randNum = rand() %(To - from + 1) + from;
    return randNum;
}

char GetRandomChar(enCharType charType)
{
    switch (charType)
    {
        case enCharType::smallletter:
        {
            return char(RandomNum(97, 122));
            break;
        }
        case enCharType::CapitalLetter:
        {
            return char(RandomNum(65, 90));
            break;
        }
        case enCharType::Digit:
        {
            return char(RandomNum(48, 57));
            break;
        }
        case enCharType::SpecialChar:
        {
            return char(RandomNum(33, 47));
            break;
        }
    }
}


int main ()
{
    srand((unsigned)time(NULL));
    cout << GetRandomChar(enCharType::smallletter)<< endl;
    cout << GetRandomChar(enCharType::CapitalLetter)<< endl;
    cout << GetRandomChar(enCharType::SpecialChar)<< endl;
    cout << GetRandomChar(enCharType::Digit)<< endl;
    return 0;
}
