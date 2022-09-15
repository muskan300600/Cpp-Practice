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

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    Node* val= head;
	int count=0;
	while(val!=NULL){
	    count++;
	    val = val->next;
	}
	
    int x;
    cin>>x;
	Node* curr = head;
	Node* new_node = new Node();
    new_node->data =x;
	
	for(int i=1;i<count/2;i++){
	    curr = curr->next;
	}
	new_node->next = curr->next;
	curr->next = new_node;

    Node* curr1 = head;
    while(curr1!=NULL){
        cout<<curr1->data<<ends;
        curr1 = curr1->next;
    }
}