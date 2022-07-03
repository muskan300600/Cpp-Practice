#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(1);
    int k;
    cin>>k;
    queue<int> q1;
    stack<int> s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q1.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        q1.push(q.front());
        q.pop();
    }
    
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
}