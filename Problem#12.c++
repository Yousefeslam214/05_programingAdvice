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

void pattern (int num)
{
    for( int i = num; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
            cout << i;
    cout << endl;
    }
}

int main ()
{
    pattern(readPositiveNumber("enter a positve number ?"));
}
