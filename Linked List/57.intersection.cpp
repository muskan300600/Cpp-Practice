#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <set>
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

int main(){
    Node *head1 = NULL;
    Node *head2 = NULL;
    push(&head1, 1);
    push(&head1, 2);
    push(&head1, 3);
    push(&head1, 4);
    push(&head1, 6);
    push(&head1, 7);
    push(&head2, 1);
    push(&head2, 9);
    push(&head2, 4);
    push(&head2, 11);

    set<int> s1;
    Node* dummy = new Node();
    Node* temp = dummy;
    while(head1){
        s1.insert(head1->data);
        head1=head1->next;
    }

    while(head2){
        if(s1.find(head2->data)!=s1.end()){
            Node* new_node = new Node();
            new_node->data = head2->data;
            temp->next = new_node;
            temp = new_node;
            s1.erase(head2->data);
        }
        head2 = head2->next;
    }

    printList(&dummy->next);

    // Node* dummy = new Node();
    // Node* temp = dummy;
    // while(head1 && head2){
    //     if(head1->data == head2->data){
    //         Node* new_node = new Node();
    //         new_node->data = head1->data;
    //         temp->next = new_node;
    //         temp = new_node;
    //         head1 = head1->next;
    //         head2 = head2->next;
    //     }

    //     else if(head1->data<head2->data){
    //         head1 = head1->next;
    //     }
        
    //     else if(head2->data<head1->data){
    //         head1 = head2->next;
    //     }

    // }

    // printList(&dummy->next);
}