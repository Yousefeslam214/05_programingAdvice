#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
write a program to check if the number is Perfect ? 
*/

enum enPerfectNotPerfect {Perfect = 1, NotPerfect = 2};

float readPositiveNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;
	if (Num <= 0)
		return readPositiveNumber("Number must be >0");
    return Num;
}

void divideNum(int num)
{
    int res = 0;
    int remind = 0;
    while (num > 0)
    {
        remind = num % 10;
        res = res * 10 +(num % 10);
        num = num / 10;
    }
    cout << "reverse of Digits = "<< res << endl;
}


int main ()
{
    divideNum(readPositiveNumber("enter a positve number ?"));
}
