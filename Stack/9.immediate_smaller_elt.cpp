#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int arr[8] = {3, 10, 5, 1, 15, 10, 7, 6};
    int brr[8] = {0};
    for (int i = 0; i < 8; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            brr[i] = arr[i + 1];
        }
        else
            brr[i] = -1;
    }
    brr[7] = -1;

    for (int i = 0; i < 8; i++)
    {
        cout << brr[i] << ends;
    }
}