#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data=1;
    head->next = second;
    second->data=2;
    second->next=third;
    third->data = 3;
    third->next=NULL;

    int pos;
    cout<<"Enter the position"<<endl;
    cin>>pos;

    Node* prev = head;
    for(int i=0;i<pos-1;i++){
        prev = prev->next;
    }

    prev->next = prev->next->next;

    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<ends;
        curr = curr->next;
    }
}