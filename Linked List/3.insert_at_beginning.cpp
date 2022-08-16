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
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

    // Node *temp = new Node(x);
    // temp->next=head;
    // return temp;

    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<ends;
        curr = curr->next;
    }


}
