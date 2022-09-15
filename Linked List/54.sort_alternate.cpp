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

Node* reverse(Node** ref)
    {
        Node* current = (*ref);
        Node *prev = NULL, *next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

int main(){
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 6);
    push(&head, 7);

   Node* curr = head;
   vector<int> v;
   while(curr){
         v.push_back(curr->data);
         curr = curr->next;
     }
     sort(v.begin(),v.end());
     curr=head;
     int i=0;
     while(curr){
         curr->data=v[i++];
         curr = curr->next;
     }
    printList(&head);
}