#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    string s = "(a + (a + b))";
    int n = s.length();
    bool res=false;
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }

        else if(s[i]=='('){
            st.push(s[i]);
        }

        else if(s[i]==')'){
            if(st.top()=='(') res = true;
            while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
    }

    cout<<res;
}