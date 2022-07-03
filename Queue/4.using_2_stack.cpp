#include <iostream>
#include <stack>
using namespace std;

class Queue{
public:
    stack<int> s1;
    stack<int> s2;

    void push(int data){
        s1.push(data);
    }

    int pop(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int x = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }

};

int main(){
    Queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    cout<<q.pop();
}