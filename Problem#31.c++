#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

void swap(int& A, int& B)
{
    int temp = A;
    A = B;
    B = temp;
}

char RandomNum(int from, int to)
{
    return (rand() % (to - from + 1) + from);
}

int* FillArrWith1toN(int N)
{
    int *arr = new int[N];
    for (int i = 0; i < N;i++)
        arr[i] = i + 1;
    return arr;
}

void shuffleArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        swap(arr[RandomNum(1, size) - 1], arr[RandomNum(1, size) - 1]);
    }
}

void printArrangetArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]  << "  ";
    }
    cout << endl;
}
int main ()
{
    srand((unsigned)time(NULL));
    int N = 10;
    int *arr = FillArrWith1toN(N);
    printArrangetArray(arr, N);
    shuffleArr(arr, N);
    printArrangetArray(arr, N);
    delete[] arr;
    return 0;
}
