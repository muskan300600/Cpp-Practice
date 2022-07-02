#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    // int arr[8] = {4, 10, 5, 8, 20, 15, 3, 12};
    // int brr[8] = {0};

    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = i; j >= 0; j--)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             brr[i] = arr[j];
    //             break;
    //         }
    //         else brr[i]=-1;
    //     }

    // }

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << brr[i] << ends;
    // }

    //Using stack
    // int arr[8] = {4};
    // int brr[8] = {0};
    // stack<int> s;
    // for (int i = 0; i < 8; i++)
    // {
    //     while (!s.empty() && s.top() >= arr[i])
    //     {
    //         s.pop();
    //     }

    //     if (s.empty())
    //         brr[i] = -1;
    //     else
    //         brr[i] = s.top();
    //     s.push(arr[i]);
    // }

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << brr[i] << ends;
    // }

    vector<int> a;
    a.push_back(4);
    // a.push_back(10);
    // a.push_back(5);
    // a.push_back(8);
    vector<int> b;
    stack<int> s;
    for (int i = 0; i < a.size(); i++)
    {
        while (!s.empty() && s.top() >= a[i])
        {
            s.pop();
        }

        if (s.empty())
            b.push_back(-1);
        else
            b.push_back(s.top());
        s.push(a[i]);
    }

    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }



}