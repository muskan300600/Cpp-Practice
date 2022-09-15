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
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 6);
    push(&head, 7);
    Node *curr = head;
    vector<int> v;
    while (curr)
    {
        v.push_back(curr->data);
        curr = curr->next;
    }
    int i = 0;
    int n = v.size();
    int val;
    if(n%2==0) val=n;
    else val = n-1;
    for (i = 0; i < val; i = i + 2)
    {
        swap(v[i], v[i + 1]);
    }

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<ends;
    // }

    curr = head;
    i=0;
    while(curr){
        curr->data = v[i++];
        curr = curr->next;
    }
    printList(&head);  

    //Easier way
    // Node* temp = head;
    // while (temp != NULL && temp->next != NULL) {
    //     swap(temp->data,temp->next->data);
    //     temp = temp->next->next;
    // }

    //By changing links
    
}