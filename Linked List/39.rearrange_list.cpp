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

void reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL, *temp = NULL;
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << ends;
        node = node->next;
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
    push(&head, 16);
    printList(head);
    int v[100];

    Node* curr = head;
    int k=0,count=0;
    while(curr!=head){
        v[k]=curr->data;
        curr = curr->next;
        k++;
        count++;
    }

    curr = head;
    int i=0,j=count-1;
    while(curr!=NULL){
        curr->data = v[i++];
        curr=curr->next;
        if(curr!=NULL){
            curr->data = v[j--];
            curr = curr->next;
        }
    }

    printList(head);
}

