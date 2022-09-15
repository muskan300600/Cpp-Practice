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

void printList(Node **node)
{
    while (*node != NULL)
    {
        cout << (*node)->data << ends;
        *node = (*node)->next;
    }
    cout << endl;
}

void reverse(Node **ref)
{
    Node *current = (*ref);
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    (*ref) = prev;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    push(&head1, 1);
    push(&head1, 2);
    push(&head1, 3);
    push(&head1, 4);
    push(&head1, 6);
    push(&head1, 7);
    push(&head2, 8);
    push(&head2, 9);
    push(&head2, 10);
    push(&head2, 11);

    Node *curr1 = head1;
    Node *curr2 = head2;
    vector<int> v;
    while (curr1 || curr2)
    {
        if (curr1)
        {
            v.push_back(curr1->data);
            curr1 = curr1->next;
        }
        if (curr2)
        {
            v.push_back(curr2->data);
            curr2 = curr2->next;
        }
    }

    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ends;
    }

    cout<<endl;
    
    Node* head = NULL;
    for(int i=0;i<n;i++){
        Node* new_node = new Node;
        new_node->data = v[i];
        new_node->next = head;
        head=new_node;
    }
    
    reverse(&head);
    printList(&head);
}

// Node* curr1 = *p;
//      Node* curr2 = *q;
//      Node* head = curr1;
//      while(curr1 && curr2){
//          Node* temp1 = curr1->next;
//          Node* temp2 = curr2->next;
//          curr1->next = curr2;
//          curr2->next = temp1;
//          curr1=temp1;
//          curr2=temp2;
//      }
//      *p = head;
//      *q = curr2;