#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "my.name.is.harry.clarke";
    int n = str.length();
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string val = "";
        while (i < n && (str[i] >= 'a' && str[i] <= 'z'||str[i]>='A'
        && str[i]<='Z'||str[i]>='0' && str[i]<='9'))
        {
            val = val + str[i];
            i++;
        }
        reverse(val.begin(), val.end());
        s.push_back(val);

        if (str[i] == '.')
        {
            s.push_back(".");
        }
    }

    string res;
    for (int i = 0; i < s.size(); i++)
    {
        res = res + s[i];
    }
    cout << res;
}