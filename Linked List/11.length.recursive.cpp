#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node **ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*ref);
    (*ref)=new_node;
}

int getCount(Node *head){
    if(head==NULL)
        return 0;
    else
        return 1+getCount(head->next);
}

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    cout<<getCount(head);
}