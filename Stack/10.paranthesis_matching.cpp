#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string str = "())({}";
    int n = str.length();
    stack<char> s;
    for(int i=0;i<n;i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            s.push(str[i]);
        }

        else if(str[i]==')' & !s.empty()){
            if(s.top()=='('){
                s.pop();
            }
            else break;
        }
        
        else if(str[i]=='}' & !s.empty()){
            if(s.top()=='{'){
                s.pop();
            }
            else break;
        }

        else if(str[i]==']' & !s.empty()){
            if(s.top()=='['){
                s.pop();
            }
            else break;
        }

        else {
            s.push(str[i]);
        }

    }

    if(s.empty()){
        cout<<"Yes";
    }
    else cout<<"No";
}
