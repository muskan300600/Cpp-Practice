#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

int main(){
    string str="*+AB-CD";
    stack<string> s;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<'Z'){
            string op(1,str[i]);
            s.push(op);
        }
        else{
            string val1 = s.top();
            s.pop();
            string val2 = s.top();
            s.pop();
            s.push("(" + val1 + str[i] + val2 +")");
        }
    }

    cout<<s.top();
}