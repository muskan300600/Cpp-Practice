#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string A = "aabbbchib";
    queue<char> q;
    vector<int> repeat(26, -1);
    string s = "";
    for (int i = 0; i < A.length(); i++)
    {

        if (repeat[A[i] - 97] == -1)
        {
            q.push(A[i]);
            repeat[A[i] - 97]++;
        }
        else
        {
            if (!q.empty() && A[i] == q.front())
            {
                q.pop();
            }
            repeat[A[i] - 97]++;

            while (!q.empty() && repeat[q.front() - 97] > 0)
            {
                q.pop();
            }
        }
        if (q.empty())
        {
            s += "#";
        }
        else
        {
            s += q.front();
        }
    }
    cout<<s;
}