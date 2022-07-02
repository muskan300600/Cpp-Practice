#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str ="my.name.is.harry.clarke";
    int n = str.length();
    stack<string> s;
    for(int i=0;i<n;i++){
        string val="";
        while(i<n && str[i]!='.'){
            val = val+str[i];
            i++;
        }
        s.push(val);
    }

    string res;
    while(!s.empty()){
        res = res+s.top()+".";
        s.pop();
    }
    cout<<res;
}