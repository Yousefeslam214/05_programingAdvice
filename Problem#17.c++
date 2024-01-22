#include <iostream>
#include <cmath>
#include <string>
using namespace std;


string ReadPass()
{
    string password;
    cout << "enter password" << endl;
    cin >> password;
    return password;
}

void pattern (string password)
{
    string word = "";
    int count = 0 ;
    for( int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                cout << word << endl;
                count++;
                cout <<"Trail [" << count << "] : ";
                cout << word << endl;
                if (word == password)
                {
                    cout << "\n Password is " << word <<endl;
                    return;
                }
                word = "";
            }
        }
    cout << endl;
    }
}

int main ()
{
    pattern(ReadPass());
}
