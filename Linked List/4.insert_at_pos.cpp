#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third= NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    int toAdd,pos;
    cout<<"Enter the value to add"<<endl;
    cin>>toAdd;
    cout<<"Enter the position"<<endl;
    cin>>pos;

    Node* new_node = new Node();
    new_node->data = toAdd;
    Node* prev = head;
    for(int i=0;i<pos-1;i++){
        prev = prev->next;
    }

    new_node->next = prev->next;
    prev->next = new_node;

    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<ends;
        curr = curr->next;
    }
    


}