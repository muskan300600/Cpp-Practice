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

void printList(Node** node)
{
    while (*node != NULL) {
        cout << (*node)->data <<ends;
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

    vector<int> v;
    Node*curr = head;
    while(curr){
        v.push_back(curr->data);
        curr = curr->next;
    }
    int i=0;
    int j=v.size()-1;
    curr = head;
    while(i<j){
        curr->data = v[i]-v[j];
        curr = curr->next;
        i++;j--;
    }

    while(curr){
        curr->data = v[i++];
        curr=curr->next;
    }

    printList(&head);
}