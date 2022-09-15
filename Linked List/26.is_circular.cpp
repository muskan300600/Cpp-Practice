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

bool isCircular(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        if(curr->next == head){
            return true;
        }
        curr=curr->next;
    }
    return false;
}

int main()
{
    Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    head->next->next->next = head;

    if(isCircular(head))
        cout<<"True";
    else cout<<"False";

}