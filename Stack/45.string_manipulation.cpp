#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "12213";
    int n = str.length();
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int curr = str[i] - '0';
        if (s.empty())
        {
            s.push(curr);
        }
        else
        {
            if ((s.top() == 0 && curr == 9) || (s.top() == 9 && curr == 0))
            {
                s.pop();
            }
            else if ((s.top() % 2 == 0 && curr == s.top() - 1) || (s.top() % 2 == 1 && curr == s.top() + 1))
            {
                s.pop();
            }
            else
            {
                s.push(curr);
            }
        }
    }
    cout << s.size();
}