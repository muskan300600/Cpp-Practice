#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    string str = "20-3+5*2";
    int n = str.length();
    stack<string> v;
    stack<char> c;
    for(int i=0;i<n;i++){
        string num="";
        while(i<n && (str[i]>='0' && str[i]<='9')){
            num = num+str[i];
            i++;
        }
        v.push(num);
        if(i<n){
            c.push(str[i]);
        }
    }

    string ans;
    while(!v.empty()){
        ans = ans+v.top();
        v.pop();
        if(!c.empty()){
            ans = ans+c.top();
            c.pop();
        }
    }
    cout<<ans;
}