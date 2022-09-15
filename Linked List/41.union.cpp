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

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    push(&head1, 20);
    push(&head1, 4);
    push(&head1, 15);
    push(&head1, 10);
    push(&head2, 10);
    push(&head2, 7);
    push(&head2, 14);
    push(&head2, 4);
    push(&head2, 0);

    set<int> s;
    while(head1){
        s.insert(head1->data);
        head1=head1->next;
    }
    while(head2){
        s.insert(head2->data);
        head2=head2->next;
    }

    Node* val = NULL;
    for(auto i=s.rbegin();i<s.rend();i++){
        Node* new_node= new Node();
        new_node->data = *i;
        new_node->next = val;
        val = new_node;
    }
    printList(val);
}