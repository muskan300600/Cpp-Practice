#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    int n =s.size();
    int val;
    if(n%2==0) val = n/2;
    else val = (n+1)/2;

    vector<int> v;
    for(int i=0;i<val;i++){
        v.push_back(s.top());
        s.pop();
    }
    s.pop();

    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        s.push(v[i]);
    }

    while(!s.empty()){
        cout<<s.top()<<ends;
        s.pop();
    }
}