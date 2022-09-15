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

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << ends;
        head = head->next;
    }
    cout << endl;
}

Node* insertData(Node* head,int data){
    
    Node* curr=head;
    Node* new_node= new Node;
    new_node->data = data;
    if(curr->data>data){
        new_node->next = curr;
        return new_node;
    }

    while(curr->next && curr->next->data<data){
        curr=curr->next;
    }
    new_node->next = curr->next;
    curr->next = new_node;
    return head;
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 6);

    int data;
    cin>>data;
    printList(insertData(head,data));
}