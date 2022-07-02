#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    string str = "()(())(";
    int n = str.length();
    stack<int> s;
    int ans=0;
    s.push(-1);
    for(int i=0;i<n;i++){
        if(str[i]=='('){
            s.push(i);
        }
        else{
            s.pop();
            if(s.empty()){
                s.push(i);
            }
            else {
                ans = max(ans,i-s.top());
            }
        }
    }
    cout<<ans;
}