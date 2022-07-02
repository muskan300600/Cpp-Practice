#include <iostream>
#include<algorithm>
using namespace std;

class StackNode{
public:
    int data;
    StackNode* next;
};

StackNode* newNode(int data){
    StackNode* new_node = new StackNode();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int isEmpty(StackNode* head){
    return !head;
}

void push(StackNode** head,int data){
    StackNode* new_node = newNode(data);
    new_node->next = (*head);
    (*head)=new_node;
}

int pop(StackNode** head){
    if(isEmpty(*head)){
        return '#';
    }
    
    StackNode* temp = *head;
    *head = (*head)->next;
    int x = temp->data;
    free(temp);
    return x;
}

int peek(StackNode** head){
    if(isEmpty(*head)){
        return '#';
    }
    return (*head)->data;
}

int main(){
    StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    cout<<pop(&root);
}