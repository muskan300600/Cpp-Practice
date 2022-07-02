#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main()
{
    string str = "Practicecoding";
    stack<char> s;
    int n = str.length();
    for(int i=0;i<n;i++){
        s.push(str[i]);
    }    
    
    for(int i=0;i<n;i++){
        str[i]=s.top();
        s.pop();
    }

    cout<<str;
}