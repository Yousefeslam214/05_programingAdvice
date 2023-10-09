#include <iostream>
using namespace std;


void PrintLine()
{
}

void printTableHeader()
{
    int i;
    cout << "\t";
    for (i = 1; i < 10;i++)
    {
        cout << i << "\t";
    }
    cout << i;
    cout << "\n___________________________________________________________________________________\n";
}

string ColumSperator(int i)
{ 
    if (i < 10) 
        return"   |";
    else
        return"  |"; 
}
void printMultiplicationTable()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        cout << i << ColumSperator(i) << "\t";
        for (j = 1; j <= 10; j++)
        {
            cout << i*j << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    printTableHeader();
    printMultiplicationTable();
}