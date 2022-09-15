#include<iostream>
#include <algorithm>
#include <math.h>
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

    int k;
    cin>>k;
    int count=0;
    Node* curr = head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    
    int d=0;
    if(count%k == 0)
         d = count/k;
       else
         d = count/k + 1;
    for(int i=0;i<d-1;i++){
        head = head->next;
    }
    
    cout<<head->data;

}