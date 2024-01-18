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
    while (num > 0)
    {
        cout << num % 10 << endl;
        num = num / 10;
    }
    
}


int main ()
{
    divideNum(readPositiveNumber("enter a positve number ?"));
}
