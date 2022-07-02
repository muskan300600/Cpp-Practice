#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    string str = "(aa(bdc))p(dee)â€‹";
    int n = str.length();
    stack<char> s;
    int count =0;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(str[i]=='('){
            count++;
            v.push_back(count);
            s.push(count);            
        }

        else if(str[i]==')'){
            v.push_back(s.top());
            s.pop();
        }
        else continue;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<ends;
    }
}