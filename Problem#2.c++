#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
write a program print all prime numbers from 1 to N.
*/

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

float readPositiveNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;
	if (Num <= 0)
		return readPositiveNumber("Number must be >0");
    return Num;
}

enPrimeNotPrime checkPrime(int num)
{
	int M = round(num / 2);

	for (int count = 2; count <= M; count++)
	{
		if (num % count == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
    int i;

    for(i = 1; i <= Number; i++)
    {
        if(checkPrime(i) == enPrimeNotPrime::Prime)
            cout << i << "\n";
    }
}

int main ()
{
    PrintPrimeNumbersFrom1ToN(readPositiveNumber("enter a positve number ?"));
}