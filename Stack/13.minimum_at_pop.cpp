#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int min(stack<int> k)
{
    int x = k.top();
    while (!k.empty())
    {
        if (x > k.top())
            x = k.top();
        k.pop();
    }
    return x;
}

int main()
{
    stack<int> s;
    int arr[8] = {4, 10, 5, 8, 20, 15, 3, 12};
    for (int i = 0; i < 8; i++)
    {
        s.push(arr[i]);
    }

    while (!s.empty())
    {
        cout << min(s) << ends;
        s.pop();
    }
}