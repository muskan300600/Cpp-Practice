#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main()
{
    string str = "/home//foo/";
    int n = str.length();
    stack<string> v;

    for (int i = 0; i < n; i++)
    {
        string dir = "";
        while (i < n && str[i] != '/')
        {
            dir += str[i];
            i++;
        }

        if (dir == "..")
        {
            if (!v.empty())
                v.pop();
        }
        else if (dir == "." || dir == "")
        {
            continue;
        }
        else
        {
            v.push(dir);
        }
    
    }

string res="";
for (int i = 0; i < v.size(); i++)
{
    res = res + "/" + v.top();
    v.pop();
    //cout<<v[i];
}

if(res==""){
    res = "/";
}

cout << res;
}