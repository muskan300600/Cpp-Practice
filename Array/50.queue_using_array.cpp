#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyQueue{
private:
    int arr[1000];
    int front;
    int rear;
public:
    MyQueue(){
        front=0;
        rear=0;
    }
   void push(int);
   int pop();
};

void MyQueue :: push(int x)
{
       arr[rear]=x;
       rear++;
}

int MyQueue :: pop()
{
       if(front==rear)
          return -1;
       int t = arr[front] ;
       front++;
       return t;
}

int main(){
    
}