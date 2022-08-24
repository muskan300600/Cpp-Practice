#include<iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*ref);
    (*ref)=new_node;

}

bool searchElt(Node* head,int x){
    if(head==NULL){
        return false;
    }
    if(head->data==x){
        return true;
    }
    else searchElt(head->next,x);
}

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    int x;
    cin>>x;
    cout<<searchElt(head,x);
}