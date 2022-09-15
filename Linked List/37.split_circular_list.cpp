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
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<ends;
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
    head->next->next->next->next = head;
   
    Node* head1_ref=new Node();
    Node* head2_ref=new Node();
    Node* slow=head;
    Node* fast = head->next;
    while(fast!=head && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    head1_ref = head;
    head2_ref = slow->next;
    slow->next = head1_ref;
    Node* curr = head2_ref;
    while(curr!=head){
        curr = curr->next;
    }    
    curr->next = head2_ref;
    printList(head1_ref);
    printList(head2_ref);
}