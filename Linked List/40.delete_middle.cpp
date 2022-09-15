#include <iostream>
#include <algorithm>
#include <vector>
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

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << ends;
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* curr = head;
    while(curr->next!=slow && curr!=slow){
        curr=curr->next;
    }
    curr->next = slow->next;
    printList(head);
    
}