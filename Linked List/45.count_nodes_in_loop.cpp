#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **ref, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    (*ref) = new_node;
}

int count(Node* head){
    Node* curr = head;
    int count=1;
    while(curr->next!=head){
        count++;
        curr=curr->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    push(&head, 11);
    push(&head, 15);
    push(&head, 20);
    push(&head, 5);
    push(&head, 10);

    Node* slow = head;
    Node* fast=head;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast= fast->next->next;
        
        if(slow==fast){
            cout<<count(slow);
        }
    }
    cout<<0;
}