#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next=(*ref);
    (*ref)=new_node;
}

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,6);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,6);

    int toFind;
    cin>>toFind;

    int count=0;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==toFind){
            count++;
        }
        curr = curr->next;
    }

    cout<<count;
}