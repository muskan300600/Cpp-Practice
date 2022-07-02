#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int arr[8] = {3, 10, 5, 1, 15, 10, 7, 6};
    int brr[8] = {0};
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = i; j < 8; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             brr[i] = arr[j];
    //             break;
    //         }
    //         else
    //             brr[i] = -1;
    //     }
    // }

    // for (int i = 0; i < 8; i++){
    //     cout<<brr[i]<<ends;
    // }

    //Using Stack
    stack<int> s;
    for (int i = 7; i >= 0; i--)
    {
        while (!s.empty() && s.top() < arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            brr[i] = -1;
        }
        else
            brr[i] = s.top();
        s.push(arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        cout << brr[i] << ends;
    }
}
