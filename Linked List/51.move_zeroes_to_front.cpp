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
    Node *head1 = NULL;
    
    push(&head1, 1);
    push(&head1, 2);
    push(&head1, 3);
    push(&head1, 0);
    push(&head1, 0);
    push(&head1, 7);

    Node* curr = head1;
    vector<int> v;
    int count=0;
    while(curr){
        if(curr->data ==0){
            count++;
        }
        else{
            v.push_back(curr->data);
        }
        curr = curr->next;
    }
    curr = head1;
    while(curr){
       if(count>0){
           curr->data =0;
           count--;
       }
       else{
           curr->data = v[0];
           v.erase(v.begin());
       }
       curr = curr->next;
    }
    printList(&head1);
}