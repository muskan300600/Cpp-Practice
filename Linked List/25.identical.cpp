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

bool identical(Node* head1,Node* head2){
    while(head1!=NULL & head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }

        head1 = head1->next;
        head2=head2->next;
    }
    return true;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    push(&head1, 1);
    push(&head1, 2);
    push(&head1, 3);
    push(&head1, 4);
    push(&head1, 5);

    push(&head2, 1);
    push(&head2, 2);
    push(&head2, 3);
    push(&head2, 4);
    push(&head2, 5);
    if(identical(head1,head2)){
        cout<<"Identical";
    }    
    else
        cout<<"Not Identical";
}