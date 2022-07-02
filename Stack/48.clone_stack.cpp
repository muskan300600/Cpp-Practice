#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void clonestack(stack<int> s,stack<int> &cloned){
    if(s.empty()) return;
    int val = s.top();
    s.pop();
    clonestack(s,cloned);
    cloned.push(val);
}

int main(){
    
}