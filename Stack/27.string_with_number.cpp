#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    string str = "aaABBb";
    int n = str.length();
    stack<char> s;
    int count=0;
    string res;
    s.push(tolower(str[0]));
    for(int i=0;i<n;i++){
        str[i]=tolower(str[i]);
        if(str[i]==s.top()){
            count++;
        }

        else{
            res = res+to_string(count);
            res = res+s.top();
            count=1;
            s.push(str[i]);
        }
    }
    res = res+to_string(count);
    res = res+s.top();
    cout<<res;
}