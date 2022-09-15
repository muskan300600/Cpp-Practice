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

void deleteNode(Node* del){
    Node* temp = del;
    del->data = temp->data;
    del->next=temp->next;
    free(temp);
}

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
}