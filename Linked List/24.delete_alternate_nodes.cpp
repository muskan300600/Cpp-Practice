#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*ref);
    (*ref) = new_node;
}

void delAlt(Node* head){
    Node* prev = head;
    Node* node = head->next;
    while(prev!=NULL & node!=NULL){
        prev->next = node->next;
        prev = prev->next;
        if(prev!=NULL){
            node = prev->next;
        }
    }
}

void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<< node->data<<" "; 
        node = node->next; 
    } 
} 

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    printList(head);
    cout<<endl;
    delAlt(head);
    printList(head);
    
}