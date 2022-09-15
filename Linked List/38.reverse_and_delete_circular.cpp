#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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

void printList(Node** node)
{
    while (*node != NULL) {
        cout << (*node)->data <<ends;
        *node = (*node)->next;
    }
    cout << endl;
}

void deleteList(Node* head,int key){
    Node* curr = head;
    Node* temp=NULL;
    while(curr->next->data!=key && curr->next!=head){
        curr = curr->next;
    }
    temp = curr->next;
    curr->next = temp->next;
    delete(temp);
}

void reverseList(Node* head){
    Node* curr = head;
    Node* next = curr->next;
    Node* temp = NULL;
    while(next!=head){
        temp=next->next;
        next->next = curr;
        curr=next;
        next = temp;
    }
    next->next = curr;
    head = curr;
}

int main()
{
    Node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    push(&head, 16);
    head->next->next->next->next = head;
    
}