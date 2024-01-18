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

enPerfectNotPerfect checkPerfect(int num)
{
    int sum = 0;
    for(int i = 1; i < num ;i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (num == sum)
    {
        return enPerfectNotPerfect::Perfect;
    }
    else
    {
        return enPerfectNotPerfect::NotPerfect;
    }
}
void print(enPerfectNotPerfect result)
{
    if (result == enPerfectNotPerfect::NotPerfect){
        cout << "Is Not Perfect Number.\n";
    }
    
    if (result == enPerfectNotPerfect::Perfect){
        cout << "Is Perfect Number.\n"; 
    }
}

void PrintPerfect(int Number)
{
    int i;

    for(i = 1; i <= Number; i++)
    {
        if(checkPerfect(i) == enPerfectNotPerfect::Perfect)
            cout << i << "\n";
    }
}

int main ()
{
    PrintPerfect(readPositiveNumber("enter a positve number ?"));
}
