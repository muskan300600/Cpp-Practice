#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    string str = "()(())(";
    int n = str.length();
    int count =0;
    stack<char> s;
    for(int i=0;i<n;i++){
        if(str[i]=='(')
            s.push(str[i]);
        else if(str[i]==')'){
            if(!s.empty() && s.top()=='('){
                count++;
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
    }

    cout<<count;
}