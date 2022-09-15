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
    push(&head,3);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,7);

    Node* curr = head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr = curr->next;
    }
    
    int res=0;
    Node* prev = head;

    if(count==1)
        res=prev->data;
    else{    
        for(int i=0;i<count/2;i++){
            prev=prev->next;
        }
        res = prev->data;
    }
    
    cout<<res;

    //easy way
    // Node* slow_ptr=head;
    // Node* fast_ptr=head->next;
    // while(fast_ptr!=NULL && fast_ptr->next!=NULL){
    //     slow_ptr = slow_ptr->next;
    //     fast_ptr = fast_ptr->next->next;
    // }

    // Now slow_ptr refers to the middle most element
}