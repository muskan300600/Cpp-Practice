#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

int main(){
    string str = "-+8/632";
    int n = str.length();
    stack<int> s;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9')
            s.push(str[i]-'0');
        else{
            int val1 = s.top();
            s.pop();
            int val2 = s.top();
            s.pop();
            if(str[i]=='+')
                s.push(val1+val2);
            if(str[i]=='-')
                s.push(val1-val2);
            if(str[i]=='*')
                s.push(val1*val2);
            if(str[i]=='/')
                s.push(val1/val2);
        }
    }

    cout<<s.top();
}