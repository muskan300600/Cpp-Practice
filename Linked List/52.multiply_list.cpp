#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
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

    long long mod = (long)pow(10,9)+7;
    long long n1=0;
    long long n2=0;
    while(head1){
        n1 = (n1*10+head1->data)%mod;
        head1 = head1->next;
    }

    while(head2){
        n2 = (n2*10+head2->data)%mod;
        head2 = head2->next;
    }

    cout<<(n1*n2)%mod;
}