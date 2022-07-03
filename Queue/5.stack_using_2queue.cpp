#include <iostream>
#include <queue>
using namespace std;

class Stack{
public:
    queue<int> q1;
    queue<int> q2;

    void push(int data){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop(){
        int x = q1.front();
        q1.pop();
        return x;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.pop();
}