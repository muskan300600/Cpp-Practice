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

int main(){
    Node *head = NULL;
    push(&head, 1);
    push(&head, 0);
    push(&head, 0);
    push(&head, 1);
    push(&head, 1);
    push(&head, 0);
    long long unsigned int num =0;
    long long unsigned int mod = 1000000007;
    while(head){
        num = (2*num)+head->data;
        head = head->next;
    }
    cout<<num;
}