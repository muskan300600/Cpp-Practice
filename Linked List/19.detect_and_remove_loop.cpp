#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    int flag;
};

void push(Node** ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->flag=0;
    new_node->next=(*ref);
    (*ref)=new_node;
}

void detectAndRemoveLoop(Node* h){
    int count=0;
    while(h!=NULL){
        
        if(h->flag==0){
            count++;
        }

        else if(h->flag==1){
            break;
        }

        h->flag=1;
        h=h->next;
    }
    //return count;
    Node* curr = h;
    for(int i=0;i<count-1;i++){
        //cout<<curr->data<<ends;
        curr = curr->next;
    }
    curr->next = NULL;
    
}

int main(){
    Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    head->next->next->next->next = head;

    detectAndRemoveLoop(head);

    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<ends;
        curr = curr->next;
    }
    //curr->next = NULL;

}