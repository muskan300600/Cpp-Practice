#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "1002991";
    int n = str.length();
    int k;
    cin >> k;
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() > str[i] && k > 0)
        {
            s.pop();
            k--;
        }
        if(!s.empty() || str[i] != '0')
                s.push(str[i]);
    }

    if (k > 0)
    {
        while (!s.empty() && k > 0)
        {
            s.pop();
            k--;
        }
    }

    string ans;
    while(!s.empty()){
        ans = ans+s.top();
        s.pop();
    }

    reverse(ans.begin(),ans.end());
    if(ans.empty()){
        ans = ans +"0";
    }
    cout<<ans;
}
    