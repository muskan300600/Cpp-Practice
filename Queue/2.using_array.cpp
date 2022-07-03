#include <iostream>
#include <algorithm>
using namespace std;

class Queue{
public:
    int front, rear,capacity;
    int *queue;
    Queue(int c){
        front=rear=0;
        capacity =c;
        queue = new int;
    }

void dequeue(){
    if (front == rear) {
            cout<<"\nQueue is  empty\n";
            return;
        }
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
        return;
}

void enqueue(int data){
     if (capacity == rear) {
            cout<<"\nQueue is full\n";
            return;
        }
        else {
            queue[rear] = data;
            rear++;
        }
        return;
}

int getFront(){
    if(front==rear){
        cout<<"Stack is empty"<<endl;
        return;
    }
    return queue[0];
}

void display(){
    if(front==rear){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=front;i<rear;i++){
        cout<<queue[i]<<" ";
    }
    return;
}
};

int main(){
    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout<<endl;
    q.enqueue(50);
    q.display();
    cout<<endl;
    q.dequeue();
    q.dequeue();
    q.display();
    cout<<endl;
    q.getFront();
}

// #define SIZE 5
// int A[SIZE];
// int front = -1;
// int rear = -1;
// //function to check if queue is empty
// bool isempty()
// {
//  if(front == -1 && rear == -1)
//  return true;
//  else
//  return false;
// }
// //function to insert element in queue
// void enqueue ( int value )
// {
//  if (rear == SIZE-1)
//   cout<<"Queue is full \n";
//  else
//  {
//   if( front == -1)
//    front = 0;
//   rear++;
//   A[rear] = value;
//  }
// }
// //function to remove element from queue
// void dequeue ( )
// {
//  if( isempty() )
//   cout<<"Queue is empty\n";
//  else
//  if( front == rear )
//   front = rear = -1;
//  else
//   front++;
// }
// //function to display element at front
// void showfront( )
// {
//  if( isempty())
//   cout<<"Queue is empty\n";
//  else
//   cout<<"element at front is:"<<A[front]<<"\n";
// }
// //function to display elements of the queue
// void displayQueue()
// {
//  if(isempty())
//   cout<<"Queue is empty\n";
//  else
//  {
//   for( int i=front ; i<= rear ; i++)
//    cout<<A[i]<<" ";
//   cout<<"\n";
//  }
// }

// int main()
// {
//  //inserting elements in queue
//  cout<<"Inserting elements in queue\n";
//  enqueue(2);
//  displayQueue();
//  enqueue(3);
//  displayQueue();
//  enqueue(5);
//  displayQueue();
//  enqueue(7);
//  displayQueue();
//  enqueue(8);

//  displayQueue();
//  // queue is full
//  enqueue(9);
//  //show element at front
//  showfront();

//  cout<<"Removing elements from queue\n";
//  //removing elements from the queue
//  dequeue();
//  displayQueue();
//  dequeue();
//  displayQueue();
//  dequeue();
//  displayQueue();
//  dequeue();
//  displayQueue();
//  dequeue();

//  return 0;
// }