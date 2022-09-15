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

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 6);
    push(&head, 7);
    
    Node*a,*b;
    Node* n1=head;
    Node* n2 = head->next;
    Node * head2 = head->next;
    while(n2 && n2->next){
        n1->next = n2->next;
        n2->next = n2->next->next;
        n1 = n1->next;
        n2 = n2->next;
    }
    n1->next = NULL;
    a=head;
    b=head2;

    printList(&a);
    cout<<endl;
    printList(&b);
}