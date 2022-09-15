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

void reverseList(Node** ref){
    Node* curr = (*ref);
    Node* prev=NULL;Node* temp=NULL;
    while(curr!=NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    (*ref)=prev;
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    reverseList(&head);

    int n;
    cin>>n;
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+head->data;
        head = head->next;
    }

    cout<<sum;
}
