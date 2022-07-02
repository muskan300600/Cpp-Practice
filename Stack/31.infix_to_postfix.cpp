#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

int prec(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string str = "a+b*(c+d-e)+(f+g*h)-i";
    stack<char> s;
    string result;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z'|| (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
            result=result+str[i];
        else if(str[i]==')'){
            while(s.top()!='('){
                result = result+s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(!s.empty() && prec(str[i])<=prec(s.top())){
                result = result+s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }

    while(!s.empty()){
        result = result+s.top();
        s.pop();
    }

    cout<<result;
}