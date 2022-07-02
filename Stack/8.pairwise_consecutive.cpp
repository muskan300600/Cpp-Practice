#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

bool checkConsecutive(stack<int> s){
    if(s.size()==0) return false;

    if(s.size()%2!=0) s.pop();
    while(!s.empty()){
        int first = s.top();
        s.pop();
        int second = s.top();
        s.pop();
        if(abs(first-second)!=1) return false;
    }
    return true;
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    if(checkConsecutive(s))
        cout<<"Yes";
    else cout<<"No";
}