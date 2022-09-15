#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(int x){
    Node* new_node=new Node();
    new_node->data = x;
    new_node->next = top;
    top = new_node;
}

int pop(){
    int x;
    if(top==NULL)
        return -1;
    else{
        Node* val = top;
        top = top->next;
        x = val->data;
        return x;
    }
}

int main(){
    push(3);
    push(8);
    push(90);
    push(34);
    push(2);  
    pop();
    pop();
}