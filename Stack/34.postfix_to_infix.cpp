#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

int main(){
    string str = "ab*c+";
    stack<string> s;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            string op(1, str[i]);
            s.push(op);
        }

        else{
            string val2 = s.top();
            s.pop();
            string val1 = s.top();
            s.pop();
            s.push("(" + val2 + str[i] +
                   val1 + ")");
        }
    }
    cout<<s.top();
}