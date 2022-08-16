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

    int new_data;
    cout<<"Enter the value to add"<<endl;
    cin>>new_data;

    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=NULL;
    Node* prev = head;
    
    while(prev->next!=NULL){
        prev = prev->next;
    }
    prev->next=new_node;

    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data;
        curr = curr->next;
    }
}