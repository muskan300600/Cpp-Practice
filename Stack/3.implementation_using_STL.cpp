#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(14);
    s.pop();
    s.push(8);
    s.push(8);
    while(!s.empty()){
        cout<<s.top()<<ends;
    }
    cout<<s.size();
}